#include <Arduino.h>
#include <Wire.h>
#include <LiquidCrystal.h>

#define lm35Pin A0
#define heaterLedPin A4
#define coolingLedPin A5

LiquidCrystal lcd(10, 11, 4, 5, 6, 7);

int SetTemp = 25;


void setup() 
{
lcd.begin(20, 4);
pinMode(heaterLedPin, OUTPUT);
pinMode(coolingLedPin, OUTPUT);

}


void loop() 
{
int temp = analogRead(lm35Pin);
float celsius = temp;
float fahrenheit = (celsius * 1.8) + 32;
float kelvin = (celsius + 273.15);

lcd.setCursor(0, 0);
lcd.print("Temperature : ");
lcd.setCursor(0, 1);
lcd.print(celsius);lcd.print(" C");
lcd.setCursor(0,2);
lcd.print(fahrenheit);lcd.print(" F");
lcd.setCursor(0,3);
lcd.print(kelvin);lcd.print(" K");



if (celsius < (SetTemp)) 
{
  
digitalWrite(heaterLedPin, HIGH);
digitalWrite(coolingLedPin, LOW); 

} else if (celsius > (SetTemp))
{
  
digitalWrite(heaterLedPin, LOW); 
digitalWrite(coolingLedPin, HIGH); 

} else 
{

digitalWrite(heaterLedPin, LOW); 
digitalWrite(coolingLedPin, LOW);

}
delay(1000); 

}
