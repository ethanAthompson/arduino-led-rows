// Project Name: ArduinoBlinks
// Author: Ethan Thompson, ethan.a.thompson@outlook.com
// Date: 12/16/2023
// Description:
//  A simple arduino program that blinks 5 led lights in order
//

// Digital PWM Led Lights
int led10 = 10;
int led9 = 9;
int led6 = 6;
int led5 = 5;
int led3 = 3;

// Blink Pin
// * int pin => takes in the pin number
// * int idle => how long the delay is
//
int BlinkPin(int pin, int idle) {
  // put your main code here, to run repeatedly:
  digitalWrite(pin, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(idle);                       // wait for a second
  digitalWrite(pin, LOW);    // turn the LED off by making the voltage LOW
  delay(idle);                       // wait for a second
}

// Blinks in order Right to Left
int BlinkRTL() {
   BlinkPin(led3, 1000);
   BlinkPin(led5, 1000);
   BlinkPin(led6, 1000);
   BlinkPin(led10, 1000);
   BlinkPin(led9, 1000);
 
}

// Blinks in order Left to Right
int BlinkLTR() {
   BlinkPin(led9, 1000);
   BlinkPin(led10, 1000);
   BlinkPin(led6, 1000);
   BlinkPin(led5, 1000);
   BlinkPin(led3, 1000);
}

void setup() {
  pinMode(led10, OUTPUT);
  pinMode(led9, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led3, OUTPUT);
}

void loop() {
  BlinkLTR();
  BlinkRTL();
}
