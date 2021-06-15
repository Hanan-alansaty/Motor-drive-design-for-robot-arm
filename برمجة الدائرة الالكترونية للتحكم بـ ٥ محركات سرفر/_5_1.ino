#include <Servo.h>

int pos = 0;

Servo servo_9;
Servo servo_10;
Servo servo_11;
Servo servo_6;
Servo servo_5;

void setup()
{
  servo_9.attach(9, 500, 2500);
  servo_10.attach(10, 500, 2500);
  servo_11.attach(11, 500, 2500);
  servo_6.attach(6, 500, 2500);
  servo_5.attach(5, 500, 2500);
}

void loop()
{
  
  for (pos = 0; pos <= 90; pos += 1) {
    
    servo_9.write(pos);
    servo_10.write(pos);
    servo_11.write(pos);
    servo_6.write(pos);
    servo_5.write(pos);
    
    delay(15); 
  }
 
   for (pos = 90; pos >= 0; pos -= 1) {
    
    servo_9.write(pos);
    servo_10.write(pos);
     servo_11.write(pos);
     servo_6.write(pos);
     servo_5.write(pos);
     
    delay(15); 
  }
  
}