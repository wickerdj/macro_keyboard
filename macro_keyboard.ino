#include "Keyboard.h"

const int PIN_1 = 0;
const int PIN_2 = 1;
const int PIN_3 = 2;
const int PIN_4 = 3;
const int PIN_5 = 4;
const int PIN_6 = 5;
const int PIN_7 = 8;
const int PIN_8 = 9;
const int PIN_9 = 10;
const int PIN_10 = 11;
const int PIN_11 = 12;
const int PIN_12 = 13;

const int LED = 26;

int val = 0;

void setup() {
  pinMode(PIN_1, INPUT_PULLUP);
  pinMode(PIN_2, INPUT_PULLUP);
  pinMode(PIN_3, INPUT_PULLUP);
  pinMode(PIN_4, INPUT_PULLUP);
  pinMode(PIN_5, INPUT_PULLUP);
  pinMode(PIN_6, INPUT_PULLUP);
  pinMode(PIN_7, INPUT_PULLUP);
  pinMode(PIN_8, INPUT_PULLUP);
  pinMode(PIN_9, INPUT_PULLUP);
  pinMode(PIN_10, INPUT_PULLUP);
  pinMode(PIN_11, INPUT_PULLUP);
  pinMode(PIN_12, INPUT_PULLUP);
    
  pinMode(LED, OUTPUT);

  Serial.begin(9600);

  Keyboard.begin();
}

void loop() {
  if (digitalRead(PIN_1) == LOW ) {
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.write('c');
    Keyboard.releaseAll();
    Serial.println("copy");
    flashLED();
    wait();
  }
  
  if (digitalRead(PIN_2) == LOW ) {
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.write('v');
    Keyboard.releaseAll();
    Serial.println("paste");
    flashLED();
    wait();
  }
  
  if (digitalRead(PIN_3) == LOW ) {
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.write('x');
    Keyboard.releaseAll();
    Serial.println("cut");
    flashLED();
    wait();
  }

  if (digitalRead(PIN_4) == LOW ) {
    Keyboard.press(KEY_LEFT_GUI);
    Keyboard.release(KEY_LEFT_GUI);
    Keyboard.println("Obsidian");
    Keyboard.releaseAll();
    Serial.println("Obsidian");
    flashLED();
    wait();
  }

  if (digitalRead(PIN_5) == LOW ) {
    Keyboard.press(KEY_LEFT_GUI);
    Keyboard.release(KEY_LEFT_GUI);
    Keyboard.println("Visual Studio Code");
    Keyboard.releaseAll();
    Serial.println("Visual Studio Code");
    flashLED();
    wait();
  }

  if (digitalRead(PIN_6) == LOW ) {
    Keyboard.press(KEY_LEFT_GUI);
    Keyboard.release(KEY_LEFT_GUI);
    Keyboard.println("terminator");
    Keyboard.releaseAll();
    Serial.println("Terminator");
    flashLED();
    wait();
  }

  if (digitalRead(PIN_7) == LOW ) {
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_LEFT_SHIFT);
    Keyboard.write('i');
    Keyboard.releaseAll();
    Serial.println("format");
    flashLED();
    wait();
  }

  if (digitalRead(PIN_8) == LOW ) {
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.write('k');
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.write('c');
    Keyboard.releaseAll();
    Serial.println("comment");
    flashLED();
    wait();
  }

  if (digitalRead(PIN_9) == LOW ) {
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.write('k');
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.write('u');
    Keyboard.releaseAll();
    Serial.println("uncomment");
    flashLED();
    wait();
  }

  if (digitalRead(PIN_10) == LOW ) {
    Keyboard.press(KEY_F13);
    Keyboard.releaseAll();
    Serial.println("KEY_F13");
    flashLED();
    wait();
  }

  if (digitalRead(PIN_11) == LOW ) {
    Keyboard.press(KEY_F14);
    Keyboard.releaseAll();
    Serial.println("KEY_F14");
    flashLED();
    wait();
  }

  if (digitalRead(PIN_12) == LOW ) {
    Keyboard.press(KEY_F15);
    Keyboard.releaseAll();
    Serial.println("KEY_F15");
    flashLED();
    wait();
  }
}

void wait() {
  delay(200);
}

void flashLED() {
  digitalWrite(LED, HIGH);
  delay(200);
  digitalWrite(LED, LOW);
}
