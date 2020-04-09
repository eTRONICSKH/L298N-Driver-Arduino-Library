/*  
 *  L298N Dual Channel driver library
 *  Version : 1.0
 *  Status  : Simple Library
 *  web: https://www.etronicskh.com/
 *  
 */

#include <L298N.h>

#define ENA 3
#define IN1 4
#define IN2 5

L298N motor(IN1, IN2, ENA);

void setup() {
  Serial.begin(9600);
  motor.init();
}

void loop() {
  motor.setPWM(150); //Rotate forward with 150 PWM value
  delay(5000);
  motor.setPWM(0);   //Stop
  delay(3000);
  motor.setPWM(-200);   //Rotate backward with 200 PWM value
  delay(3000);
}
