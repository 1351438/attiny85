#include "DigiKeyboard.h"
#define KEY_DOWN 0x51 // Keyboard Down Arrow
#define KEY_ENTER 0x28 //Return/Enter Key

void setup() {
  pinMode(1, OUTPUT); //LED on Model A
}

void loop() {

  DigiKeyboard.update();
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(3000);


  DigiKeyboard.delay(500);

  DigiKeyboard.sendKeyStroke(KEY_Q, MOD_GUI_LEFT); //run
  DigiKeyboard.delay(500);

  DigiKeyboard.delay(100);
  DigiKeyboard.println("chrome"); //smallest cmd window possible
  DigiKeyboard.delay(500);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER); //Detach from scrolling
  DigiKeyboard.delay(500);
  DigiKeyboard.delay(500);
  //DigiKeyboard.sendKeyStroke(KEY_E, MOD_CONTRL_LEFT); //search
  DigiKeyboard.delay(500);
  DigiKeyboard.println("https://www.youtube.com/watch?v=dQw4w9WgXcQ");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER); //Detach from scrolling
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT); //run
  DigiKeyboard.delay(100);
  DigiKeyboard.println("cmd"); //smallest cmd window possible
  DigiKeyboard.delay(500);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER); //Detach from scrolling
  DigiKeyboard.delay(100);
  DigiKeyboard.println("color 2 & curl ascii.live/rick"); //going to temporary dir
  DigiKeyboard.delay(500);
  digitalWrite(1, HIGH); //turn on led when program finishes
  DigiKeyboard.delay(90000);
  digitalWrite(1, LOW);
  while (true) {}
}
