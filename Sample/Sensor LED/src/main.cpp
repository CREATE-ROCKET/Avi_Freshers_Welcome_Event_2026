#include <Arduino.h> //おまじない

#define LED_R 11 //LEDの赤色部分に繋がっているピンを11番と設定
#define LED_G 12 //LEDの緑色部分に繋がっているピンを12番と設定
#define LED_B 13 //LEDの青色部分に繋がっているピンを13番と設定
#define Sensor 15 //光センサーに繋がっているピンを15番と設定

int Brightness = 0; //"Brightness"を整数の変数として定義

void setup() { //この中のプログラムはマイコン起動時に一回だけ実行される
  pinMode(LED_R, OUTPUT); //LEDの赤色ピンのモードを出力に設定
  pinMode(LED_G, OUTPUT); //LEDの緑色ピンのモードを出力に設定
  pinMode(LED_B, OUTPUT); //LEDの青色ピンのモードを出力に設定
  pinMode(Sensor, INPUT); //光センサーのピンのモードを入力に設定
}

void loop() { //この中のプログラムはsetup実行後は繰り返し実行される
  /*
  ここにプログラムを書こう
  ヒント　センサーの値を読むには、analogRead(Sensor)が使える
  読んだ値をif文で分岐させて処理しよう(if文の書式はButton LED Simpleのヒント参照)
  */
}