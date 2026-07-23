#include <Arduino.h>
#include <vehicle.h>
#include <ultrasonic.h>
#include <ESP32Servo.h>

vehicle myCar;

#define leftLED 2
#define rightLED 12

void setup()
{
 Serial.begin(115200);
 pinMode(rightLED, OUTPUT);
 pinMode(leftLED, OUTPUT);
}

void loop()
{
  // put your main code here, to run repeatedly:
digitalWrite(leftLED, HIGH);
digitalWrite(rightLED, LOW);

delay(100);
  
}
