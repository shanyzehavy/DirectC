#include <Arduino.h>
#include "avr8-stub.h"
#include "app_api.h"

// put function declarations here:
int myFunction(int, int);

void setup() {
  debug_init();
  // put your setup code here, to run once:
  int result = myFunction(2, 3);
}

void loop() {
  // put your main code here, to run repeatedly:
  dp_top();
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}