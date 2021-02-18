// Copyright 2021 (c) Ryan Chung Kam Chung All rights reserved
//
// Created by Ryan Chung Kam Chung
// Created in February 2021
// Cycles RGB colours

// Global variables
const int REDPIN = 13, GREENPIN = 12, BLUEPIN = 11;


void setup() {                
  // Sets up the pins
  pinMode(REDPIN, OUTPUT);
  pinMode(BLUEPIN, OUTPUT);  
  pinMode(GREENPIN, OUTPUT);  
}


void loop() {
  // Loops infinitely after setup
  const int DELAYTIME = 1000, BLINKTIME = 1000;

  // Red
  digitalWrite(REDPIN, HIGH);
  delay(BLINKTIME);
  digitalWrite(REDPIN, LOW);
  delay(DELAYTIME);

  // Green
  digitalWrite(GREENPIN, HIGH);
  delay(BLINKTIME);
  digitalWrite(GREENPIN, LOW);
  delay(DELAYTIME);
  
  // Blue
  digitalWrite(BLUEPIN, HIGH);
  delay(BLINKTIME);
  digitalWrite(BLUEPIN, LOW);
  delay(DELAYTIME);
  
  // Red-Green
  digitalWrite(REDPIN, HIGH);
  digitalWrite(GREENPIN, HIGH);
  delay(BLINKTIME);
  digitalWrite(REDPIN, LOW);
  digitalWrite(GREENPIN, LOW);
  delay(DELAYTIME);

  // Green-Blue
  digitalWrite(GREENPIN, HIGH);
  digitalWrite(BLUEPIN, HIGH);
  delay(BLINKTIME);
  digitalWrite(GREENPIN, LOW);
  digitalWrite(BLUEPIN, LOW);
  delay(DELAYTIME);

  // Blue-Red
  digitalWrite(BLUEPIN, HIGH);
  digitalWrite(REDPIN, HIGH);
  delay(BLINKTIME);
  digitalWrite(BLUEPIN, LOW);
  digitalWrite(REDPIN, LOW);
  delay(DELAYTIME);

  // Red-Blue-Green
  digitalWrite(REDPIN, HIGH);
  digitalWrite(GREENPIN, HIGH);
  digitalWrite(BLUEPIN, HIGH);
  delay(BLINKTIME);
  digitalWrite(REDPIN, LOW);
  digitalWrite(GREENPIN, LOW);
  digitalWrite(BLUEPIN, LOW);
  delay(DELAYTIME);
}
