#include <Arduino.h> //おまじない

#define LED_R 11 //LEDの赤色部分に繋がっているピンを11番と設定
#define LED_G 12 //LEDの緑色部分に繋がっているピンを12番と設定
#define LED_B 13 //LEDの青色部分に繋がっているピンを13番と設定

void setup() { //この中のプログラムはマイコン起動時に一回だけ実行される
  pinMode(LED_R, OUTPUT); //LEDの赤色ピンのモードを出力に設定
  pinMode(LED_G, OUTPUT); //LEDの緑色ピンのモードを出力に設定
  pinMode(LED_B, OUTPUT); //LEDの青色ピンのモードを出力に設定
  Serial.begin(115200); //シリアル通信をボーレート115200で起動
}

void loop() { //この中のプログラムはsetup実行後は繰り返し実行される
  /*
  ここにプログラムを書こう
  非常に難しいが、スライドや今までのプログラムのヒントを読めば解くのに必要な構文は全て書かれているので、頑張って考えてみよう
  */
}