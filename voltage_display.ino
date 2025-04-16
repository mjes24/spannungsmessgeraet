#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
const int analogPin = A0;

void setup() {
  lcd.begin(16, 2);
  lcd.print("Spannung:");
}

void loop() {
  int sensorValue = analogRead(analogPin);
  float voltage = sensorValue * (5.0 / 1023.0);
  lcd.setCursor(0, 1);
  lcd.print(voltage);
  lcd.print(" V   ");
  delay(1000);
}
