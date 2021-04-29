#include <Servo.h>
Servo servo1;


int Red=2;
int Blue=4;
int Green=6;

int pinpot=A3;
int val1;


void setup() 
{
 servo1.attach(13); 
 pinMode(Red, OUTPUT);
 pinMode(Blue, OUTPUT);
 pinMode(Green, OUTPUT);
 Serial.begin(9600);
 
}
 
void loop() {
servo1.write(0);
val1=analogRead(A3);
val1=map( val1, 0,1023,0,180);
if (val1<=60){ 
servo1.write(val1); 
digitalWrite(Red, HIGH);
digitalWrite(Blue, LOW);
digitalWrite(Green, LOW);


  }

 

 else if (val1 <=120){ 
servo1.write(val1); 
digitalWrite(Blue, HIGH);
digitalWrite(Red, LOW);
digitalWrite(Green, LOW);


  }
else (val1<=180);{ 
servo1.write(val1); 
digitalWrite(Green, HIGH);
digitalWrite(Blue, LOW);
digitalWrite(Red, LOW);


  }
}
//3.systems in environment that might use servo motors in its  workings
  //1.Toy cars 
  //2.used in manufacturing industries for industrial production to speed up process
  //3. It is used in camera Auto focus