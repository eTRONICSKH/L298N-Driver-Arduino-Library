// motor.h

#ifndef L298N_H
#define L298N_H

#include "Arduino.h"



class L298N
{
  public:
    L298N(uint8_t pinIN1, uint8_t pinIN2, uint8_t pinEnable);
    void setPWM(int command);
    void init();
    
    
    
  private:         
        const uint8_t _pinIN1;
        const uint8_t _pinIN2;
        const uint8_t _pinEnable;
};


#endif
