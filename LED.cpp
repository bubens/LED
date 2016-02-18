#include "LED.h"

byte PIN;

LED::LED( byte p ) {
  PIN = p;
}

LED::~LED() {
  /* dummdidumm */
}

void LED::setup() {
  pinMode( PIN, OUTPUT );
}

void LED::on() {
  digitalWrite( PIN, HIGH );
}

void LED::off() {
  digitalWrite( PIN, LOW );
}

void LED::blink( int interval ) {
  on();
  delay( interval );
  off();
}

void LED::blink_n_times( int n, int interval ) {
  for ( int i = 0; i < n; i += 1 ) {
    blink( interval );
    delay( interval );
  }
}

