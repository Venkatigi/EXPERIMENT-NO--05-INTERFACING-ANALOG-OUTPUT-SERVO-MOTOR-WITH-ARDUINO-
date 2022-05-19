// C++ code
//
#include<Servo.h>
Servo s1;

void setup()
{
  s1.attach(9);
}

void loop()
{
  s1.write(90);
  delay(15);
  for (int i=100;i>=0;i-=1){
    s1.write(i);
    delay(15);
  }
}