#include <Servo.h>

int pos = 0;
int value = 0;

Servo servo_9;

void setup()
{
  Serial.begin(9600);
  servo_9.attach(9, 500, 2500);
}
void loop()
{
  value = analogRead(A0);
  Serial.println(value);
  pos = map(value,0,1023,0,180);
  servo_9.write(pos);
  Serial.println(pos);
}
