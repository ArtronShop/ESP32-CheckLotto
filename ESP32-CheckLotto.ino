#include <Adafruit_GFX.h>
#include <Adafruit_ST7735.h>
#include <SPI.h>
#include <Wire.h>
#include <i2c_keypad.h>
#include <WiFi.h>
#include <HTTPClient.h>
#include <ArduinoJson.h>
#include "dw_font.h"

#define TFT_CS     15
#define TFT_RST    25
#define TFT_DC     26

#define WIFI_SSID     "WIFI_SSID"
#define WIFI_PASSWORD "WIFI_PASSWORD"

extern dw_font_info_t font_th_sarabun_new_bold20;
extern dw_font_info_t font_th_sarabun_new_bold16;
dw_font_t myfont, myfont16;
String numberLottoTmp = "";

// function
void resetPage() ;
String lottoResult(String number) ;
void UTF8Convent(char *text, char *newText) ;
byte HexToByte(char *hex) ;
void draw_pixel(int16_t x, int16_t y) ;
void clear_pixel(int16_t x, int16_t y) ;

I2CKEYPAD keypad;
Adafruit_ST7735 tft(TFT_CS,  TFT_DC, TFT_RST);

KeypadEventCallback enterLottoHandler = [](char key) {
  Serial.print("PRESS: ");
  Serial.println(key);
	
  int keytoi = (int)key - '0';
  if (keytoi >= 0 && keytoi <= 9) {
    tft.print(key);
    tft.print(" ");
	numberLottoTmp += key;
    if (numberLottoTmp.length() >= 6) {
      keypad.on(PRESS, NULL);
      
	  // tft.fillScreen(ST7735_WHITE);
	  dw_font_goto(&myfont, 48, 118);
      dw_font_print(&myfont, "รอซักครู่...");
	  
      String result = lottoResult(numberLottoTmp);
      tft.fillScreen(ST7735_WHITE);
      
      dw_font_goto(&myfont, 4, 30);
      dw_font_print(&myfont, "ผลการตรวจคือ");
	  
      dw_font_goto(&myfont16, 20, 50);
      dw_font_print(&myfont16, (char*)result.c_str());
      keypad.on(PRESS, [](char key) {
        if (key == 'C') {
          resetPage();
        }   
      });
    }
  } else if (key == 'C') {
    resetPage();
  }
};

void resetPage() {
  tft.fillScreen(ST7735_WHITE);
  dw_font_goto(&myfont, 12, 30);
  dw_font_print(&myfont, "กดหมายเลขที่ต้องการ");

  tft.setTextColor(ST7735_BLUE);
  tft.setTextSize(2);
  tft.setCursor(13, 70);
  tft.print("_ _ _ _ _ _");
  
  tft.setTextColor(ST7735_RED);
  tft.setCursor(13, 67);
  
  numberLottoTmp = "";
  keypad.on(PRESS, enterLottoHandler);
}

String lottoResult(String number) {
  String Result = "";

  HTTPClient http;
  http.begin("https://thai-lottery-api.herokuapp.com/api.php?hex");
  http.addHeader("Content-Type", "application/x-www-form-urlencoded");
  int httpCode = http.POST("number=" + number);
  if (httpCode > 0) {
    if (httpCode == HTTP_CODE_OK) {
      String payload = http.getString();
      // Serial.println(payload);
      JsonObject& root = StaticJsonBuffer<1023>().parseObject(payload);
      if (root.success()) {
        char bufRos[512];
        if (root.containsKey("e")) {
          if (!root.get<bool>("e")) {
            if (root.containsKey("result")) {
              if (root.get<int>("result") != -1) {
                UTF8Convent((char*)root.get<const char*>("result"), bufRos);
                Result = bufRos;
              } else {
                Result = "ไม่ถูกรางวัล";
              }
            } else {
              Serial.println("Err: no 'result'");
			  Result = "เกิดความผิดพลาดกับ result";
            }
          } else {
            if (root.containsKey("msg")) {
              UTF8Convent((char*)root.get<const char*>("msg"), bufRos);
              Serial.println("Err: " + String(bufRos));
			  Result = "ผิดพลาด: " + String(bufRos);
            } else {
              Serial.println("Err: something");
			  Result = "เกิดความผิดพลาดบางอย่าง";
            }
          }
        } else {
          Serial.println("Error, parse json 'e' in null");
		  Result = "ผิดพลาด ตัวแปร e ไม่มีอยู่";
        }
      } else {
		Result = "ไม่สามารถถอด JSON ได้";
      }
    } else {
	  Serial.println("HTTP code: " + String(httpCode));
	  Result = "ผิดพลาดที่เซิร์ฟเวอร์: " + String(httpCode);
	}
  } else {
    Serial.printf("[HTTP] GET... failed, error: %s\n", http.errorToString(httpCode).c_str());
	Result = "เชื่อมต่อไปยังเซิร์ฟเวอร์ผิดพลาด";
  }
  http.end();
  return Result;
}

void UTF8Convent(char *text, char *newText) {
  int newTextLen = 0;
  int textLen = 0;
  char buf[3] = { 0, 0, 0 };
  while(text[textLen] != 0) {
    if (text[textLen] == '\\' && text[textLen+1] == 'x') {
      buf[0] = text[textLen+2];
      buf[1] = text[textLen+3];
      newText[newTextLen++] = HexToByte(buf);
      textLen += 4;
      continue;
    }
    newText[newTextLen++] = text[textLen];
    textLen++;
  }
  newText[newTextLen] = 0;
}

byte HexToByte(char *hex) {
  return strtol(hex, NULL, 16);
}

void draw_pixel(int16_t x, int16_t y) {
  tft.drawPixel(x, y, ST7735_BLACK);
}

void clear_pixel(int16_t x, int16_t y) {
  // tft.drawPixel(x, y, ST7735_WHITE);
}

void setup() {
  Serial.begin(115200);

  tft.initR(INITR_BLACKTAB);
  keypad.begin(0x20, 100);

  dw_font_init(&myfont, 160, 128, draw_pixel, clear_pixel);
  dw_font_setfont(&myfont, &font_th_sarabun_new_bold20);
  dw_font_init(&myfont16, 160, 128, draw_pixel, clear_pixel);
  dw_font_setfont(&myfont16, &font_th_sarabun_new_bold16);

  tft.setRotation(1);
  
  tft.fillScreen(ST7735_BLACK);

  tft.setCursor(0, 0);
  tft.setTextColor(ST7735_WHITE);
  tft.setTextWrap(true);

  tft.print("Connecting to ");
  tft.println(WIFI_SSID);

  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    tft.print(".");
  }

  tft.println();
  tft.println("WiFi connected");
  tft.print("IP address: ");
  tft.println(WiFi.localIP());

  delay(1000);
  
  resetPage();
}

void loop() {
  keypad.scand();
}
