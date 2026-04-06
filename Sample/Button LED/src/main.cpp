#include <Arduino.h> //おまじない

#define LED_R 11 //LEDの赤色部分に繋がっているピンを11番と設定
#define LED_G 12 //LEDの緑色部分に繋がっているピンを12番と設定
#define LED_B 13 //LEDの青色部分に繋がっているピンを13番と設定
#define Button 16 //ボタンに繋がっているピンを16番として設定

int Color = 0; //"Color"を整数の変数として定義

bool Push = false; //"Push"を真偽の変数として定義
bool Push_Prev = false; //"Push_Prev"を真偽の変数として定義

void setup() { //この中のプログラムはマイコン起動時に一回だけ実行される
  pinMode(LED_R, OUTPUT); //LEDの赤色ピンのモードを出力に設定
  pinMode(LED_G, OUTPUT); //LEDの緑色ピンのモードを出力に設定
  pinMode(LED_B, OUTPUT); //LEDの青色ピンのモードを出力に設定
  pinMode(Button, INPUT_PULLDOWN); //ボタンのピンのモードをプルダウンしつつ入力に設定。これによってボタンを押していない間はピンに0Vが、押すと3.3Vが掛かるようになる
}

void loop() { //この中のプログラムはsetup実行後は繰り返し実行される
  Push_Prev = Push; //ボタンを押し続けても1回しか反応しなくするためのおまじない
  Push = digitalRead(Button); //ボタンのピンがHIGH(3.3V)かLOW(0V)かを読み、Pushに代入
  if (Push and !Push_Prev) { //ちょうどボタンが押され始めた時だけこの中身が実行される
    Color = ++Color%4; //押した回数をカウントして変数Colorを調整する処理
  }
  /*
  ここにプログラムを書こう
  ヒント　上の処理でボタンを押すたびに変数Colorの値が0→1→2→3→0と変わるようになっているので、Colorの値に応じて処理が変わるようにしよう
  if文でも書けるが、switch文を使うと楽、書式は以下の通り
  switch (変数名) {
  case 条件1:
    変数=条件1の時の処理
    brake;
  case 条件2:
    変数=条件2の時の処理
    brake;
  …
  }
  */
  delay(10); //ボタンの誤動作防止で10ミリ秒(0.01秒)待機
}