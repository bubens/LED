#include <LED.h>

LED led1 = LED( 13 ); // use the onboard led

void setup() {
  // same as: pinMode( 13, OUTPUT ); but more convenient
  led1.setup();
}

void loop() {
  led1.on();		// switch the led on
  delay( 3000 );	// wait for 3 seconds
  led1.off();		// switch if off
  
  delay( 1000 );
  
  // do the same as above but in one line
  led1.blink( 3000 );
  
  delay( 1000 );
  
  // do the same as above but 3 times in a row (and still in one row)4
  led1.blink_n_times( 3, 3000 );
}