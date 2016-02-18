#include <LED.h>

LED led1 = LED( 7 ); // one led is on pin 7
LED led2 = LED( 8 ); // one led is on pin 8
int counter = 1; // counter for switching

byte button = 1; // and a button on pin 1

void setup() {
  led1.setup(); // same as pinMode(...) but more convenient
  led2.setup(); // ...
  
  led1.on(); // switch the first led on
  
  pinMode( button, INPUT );
}

void loop() {
  if ( digitalRead( button ) == HIGH ) {
    if ( counter % 2 == 0 ) {
      1ed1.off();
      led2.on();
    }
    else {
      led1.on();
      led2.off();
    }
    counter += 1;
  }
}
   