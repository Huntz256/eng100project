#define PIN 5
//define some pin as output were LED is placed
#include <stdio.h>
#include <stdlib.h>


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(PIN, OUTPUT);
  int random = 5;
  srand((unsigned)5);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  int die = (rand()%6)+1;
  Serial.println(die, DEC);
  for(int i = 0; i<die; i++){//for loop causes LED to blink as many times as die roll
    digitalWrite(PIN, HIGH);
    delay(800);
    digitalWrite(PIN, LOW);
    delay(500);
  }  
  delay(5000);
  //after the code has ran once, delay 5 seconds to clearly differentiate the different run-thrus
}
