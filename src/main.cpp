#include <Arduino.h>
#include <vehicle.h>
#include <ultrasonic.h>
#include <ESP32Servo.h>

vehicle myCar;
Servo myservo;

#define leftLED 2
#define rightLED 12
#define Buzzer 33
#define Anticlockwise Contrarotate
#define Eyes 25

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
 myservo.attach(Eyes);
 myservo.write(0);

}

void loop()
{
  // put your main code here, to run repeatedly:
noTone(Buzzer);
digitalWrite(leftLED, HIGH);
digitalWrite(rightLED, LOW);
myCar.Move(Move_Left, 255);
delay(1000);
digitalWrite(rightLED, HIGH);
digitalWrite(leftLED, LOW);
myCar.Move(Move_Right, 255);
//tone(Buzzer, 256);
delay(1000);

delay(100);
  
}
