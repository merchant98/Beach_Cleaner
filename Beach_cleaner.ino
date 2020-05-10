#include <SoftwareSerial.h>
SoftwareSerial Bluetooth(0, 1);
char Data;
const int IN1 = 7;
const int IN2 = 8;
int ena= 11;
const int IN3 = 3;
const int IN4 = 4;
int enb= 9;
const int IN5=12;
const int IN6=13;
int enc= 10; 

void setup() 
{
Serial.begin(9600);
Bluetooth.begin(9600);
pinMode(IN1, OUTPUT);
pinMode(IN2, OUTPUT);
pinMode(IN3, OUTPUT);
pinMode(IN4, OUTPUT);
pinMode(IN5, OUTPUT);
pinMode(IN6, OUTPUT);
pinMode(ena, OUTPUT);
pinMode(enb, OUTPUT);
pinMode(enc, OUTPUT);
}

void loop() 
{
  if(Bluetooth.available())
  {
  Data = Bluetooth.read();
  Serial.println(Data);
  if(Data == 'F')
  {
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2,LOW);
    analogWrite(ena,255);
    digitalWrite(IN4, HIGH);
    digitalWrite(IN3, LOW);
    analogWrite(enb,255);
  }
  else if(Data == 'B')
  {
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, HIGH);
    analogWrite(ena,255);
    digitalWrite(IN4, LOW);
    digitalWrite(IN3, HIGH);
    analogWrite(enb,255);
  }
  else if(Data == 'L')
  {
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
    analogWrite(ena,200);
    digitalWrite(IN4, LOW);
    digitalWrite(IN3, LOW );
    analogWrite(enb,200);
  }
  else if(Data == 'R')
  {
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, HIGH);
    analogWrite(ena,200);
    digitalWrite(IN4, HIGH);
    digitalWrite(IN3, LOW);
    analogWrite(enb,200);
  }
  else if(Data == 'B')
  {
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, HIGH);
    analogWrite(ena,200);
    digitalWrite(IN4, HIGH);
    digitalWrite(IN3, LOW);
    analogWrite(enb,200);
  }
  else if(Data == 'S'){
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, LOW);
    analogWrite(ena,0);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, LOW);
    analogWrite(enb,0);
    
  }
  else if(Data == 'X')
  {
    digitalWrite(IN5, HIGH);
    digitalWrite(IN6, LOW);
    analogWrite(enc,240);
    delay(1000);
    digitalWrite(IN5, LOW);
    digitalWrite(IN6, LOW);
    analogWrite(enc,0);
    }
     else if(Data == 'V')
  {
    digitalWrite(IN5, LOW);
    digitalWrite(IN6, HIGH);
    analogWrite(enc,200);
    delay(1000);
    digitalWrite(IN5, LOW);
    digitalWrite(IN6, LOW);
    analogWrite(enc,0);
    }    
  }
}
