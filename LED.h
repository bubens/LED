#ifndef LED_H
#define LED_H

#include <Arduino.h>

class LED {
  public:
    LED( byte p );
    ~LED();    
    void setup();
    void on();
    void off();
    void blink( int interval );
    void blink_n_times( int n, int interval );

  private:
    byte PIN;
};

#endif

