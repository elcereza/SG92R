#include <Servo.h>

Servo myservo;

void setup() {
  pinMode(A1, INPUT);
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
}

void loop() {
  for(int i = 0; i < 180; ++i)
  {
    myservo.write(i);
    delay(5);
  }
  for(int i = 180; i > 0; --i)
  {
    myservo.write(i);
    delay(5);
  }
}
