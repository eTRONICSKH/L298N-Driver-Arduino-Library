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

#define ENB 6
#define IN3 7
#define IN4 8

L298N motor1(IN1, IN2, ENA);
L298N motor2(IN3, IN4, ENB);

void setup() {
  Serial.begin(9600);
  motor1.init();
  motor2.init();
}

void loop() {
  motor1.setPWM(150); //motor1 forward with 150 PWM value
  motor2.setPWM(150); //motor2 forward with 150 PWM value
  delay(5000);
  
  motor1.setPWM(0);   //motor1 Stop
  delay(3000);
  
  motor1.setPWM(-200);   //motor1 backward with 200 PWM value
  motor2.setPWM(-200);   //motor2 backward with 200 PWM value
  delay(3000);
}
