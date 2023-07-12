#include <Arduino.h>
#include <Wire.h>

#define ledPinRed A5
#define ledPinBlue A4
#define ledPinGreen 9

void setup()
{
  pinMode(ledPinRed, OUTPUT);
  pinMode(ledPinBlue, OUTPUT);
  pinMode(ledPinGreen, OUTPUT);

  digitalWrite(ledPinRed, LOW);
  digitalWrite(ledPinBlue, LOW);
  digitalWrite(ledPinGreen, LOW);

}

void changeLedState(int ledPin, int duration)
{
  if (ledPin == ledPinRed)
  {
    digitalWrite(ledPinRed, HIGH);
    digitalWrite(ledPinBlue, LOW);
    digitalWrite(ledPinGreen, LOW);
  }
  else if (ledPin == ledPinBlue)
  {
    digitalWrite(ledPinRed, LOW);
    digitalWrite(ledPinBlue, HIGH);
    digitalWrite(ledPinGreen, LOW);
  }
  else if (ledPin == ledPinGreen)
  {
    digitalWrite(ledPinRed, LOW);
    digitalWrite(ledPinBlue, LOW);
    digitalWrite(ledPinGreen, HIGH);
  }
  else
  {
    digitalWrite(ledPinRed, LOW);
    digitalWrite(ledPinBlue, LOW);
    digitalWrite(ledPinGreen, LOW);
  }
  delay(duration);
}

void loop()
{
  changeLedState(ledPinRed, 1000);
  changeLedState(ledPinBlue, 1000);
  changeLedState(ledPinGreen, 1000);
}

