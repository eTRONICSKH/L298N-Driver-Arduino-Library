// motor.cpp

#include "L298N.h"

L298N::L298N(uint8_t pinIN1, uint8_t pinIN2, uint8_t pinEnable): _pinIN1(pinIN1), _pinIN2(pinIN2), _pinEnable(pinEnable){
  
}


void L298N::init() {  
  pinMode(_pinIN1, OUTPUT);
  pinMode(_pinIN2, OUTPUT);
  pinMode(_pinEnable, OUTPUT);
  digitalWrite(_pinEnable, LOW); 
  }

  
void L298N::setPWM(int command) { 
  if(command > 0){
    analogWrite(_pinEnable, command);
    digitalWrite(_pinIN2, LOW);
    digitalWrite(_pinIN1, HIGH);
    }
  else if(command < 0){
    analogWrite(_pinEnable, abs(command));
    digitalWrite(_pinIN2, HIGH);
    digitalWrite(_pinIN1, LOW);
    } 
  else{
    analogWrite(_pinEnable, 0);
    digitalWrite(_pinIN2, LOW);
    digitalWrite(_pinIN1, LOW);
    } 
  }
