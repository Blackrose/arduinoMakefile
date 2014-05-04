#include "Arduino.h"
#define LED 13

//Blink example

void setup() {
	pinMode(LED, OUTPUT);
}

void loop() {
	digitalWrite(LED, HIGH);
	delay(1000);
	digitalWrite(LED, LOW);
	delay(100);
}
