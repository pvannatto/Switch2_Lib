/*
  Switch2.h - clone of Switcher2_lib (O.Goma) Library for Switch temporarily relays
  - added milliseconds as first option by p.vannatto
  Released into the public domain.
*/
#include "Arduino.h"

#ifndef SWITCHER2_H
#define SWITCHER2_H


class Switcher2  
{  
  public:
    Switcher2(int pin, bool state);            //Set pin to operate and initial state HIGH or LOW
    int Period(long on, long off, int unit); 
    void Start();	                            
    void Stop();	
    int Timer(long on, int unit);
    bool st;
    unsigned long _previousMillis; // will store last time DEVICE was updated
    
  private:
    int _pin;      // the number of the Power pin
    bool _state;   // Initial relay state: HIGH OR LOW
};

#endif
