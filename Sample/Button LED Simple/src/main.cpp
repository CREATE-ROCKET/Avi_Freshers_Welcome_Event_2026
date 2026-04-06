#include <Arduino.h> //おまじない

#define LED_R 11 //LEDの赤色部分に繋がっているピンを11番と設定
#define LED_G 12 //LEDの緑色部分に繋がっているピンを12番と設定
#define LED_B 13 //LEDの青色部分に繋がっているピンを13番と設定
#define Button 16 //ボタンに繋がっているピンを16番として設定

void setup() { //この中のプログラムはマイコン起動時に一回だけ実行される
  pinMode(LED_R, OUTPUT); //LEDの赤色ピンのモードを出力に設定
  pinMode(LED_G, OUTPUT); //LEDの緑色ピンのモードを出力に設定
  pinMode(LED_B, OUTPUT); //LEDの青色ピンのモードを出力に設定
  pinMode(Button, INPUT_PULLDOWN); //ボタンのピンのモードをプルダウンしつつ入力に設定。これによってボタンを押していない間はピンに0Vが、押すと3.3Vが掛かるようになる
}

void loop() { //この中のプログラムはsetup実行後は繰り返し実行される
  /*
  ここにプログラムを書こう
  ヒント　digitalRead(Button)とすると、ボタンと繋がるピンに3.3V掛かっていると1が、0Vだと0が返ってきてくる
  if文を使ってみよう、書式は以下の通り
  if (条件) {条件が1だとこの中身が実行される
  }
  else {条件が0だとこの中身が実行される
  }
  */
}