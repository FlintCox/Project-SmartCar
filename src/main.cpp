#include <Arduino.h>
#include <vehicle.h>
#include <ultrasonic.h>
#include <ESP32Servo.h>

vehicle myCar;

#define leftLED 2
#define rightLED 12
#define Anticlockwise Contrarotate
/*
myCar.Move(Move_Left, 255);
myCar.Move(Move_Right, 255);
myCar.Move(Forward, 255);
myCar.Move(Backward, 255);
myCar.Move(Anticlockwise, 255);
myCar.Move(Clockwise, 255);
myCar.Move(Stop, 0);
*/
void setup()
{
 Serial.begin(115200);
 pinMode(rightLED, OUTPUT);
 pinMode(leftLED, OUTPUT);

 myCar.Init();

}

void loop()
{
  // put your main code here, to run repeatedly:
digitalWrite(leftLED, HIGH);
digitalWrite(rightLED, LOW);
myCar.Move(Move_Left, 255);
delay(1000);
digitalWrite(rightLED, HIGH);
digitalWrite(leftLED, LOW);
myCar.Move(Move_Right, 255);
delay(1000);

delay(100);
  
}
