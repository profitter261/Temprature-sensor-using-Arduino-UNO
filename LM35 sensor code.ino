#include <LiquidCrystal.h>

const int sensorPin = A0;
float temperature;
LiquidCrystal lcd(12, 11, 5, 4, 3, 2); // Change pins if needed

void setup() {
  lcd.begin(16, 2);
  lcd.print("Temp Sensor");
  delay(2000);
}

void loop() {
  int sensorValue = analogRead(sensorPin);
  temperature = (sensorValue * 5.0 * 100.0) / 1024.0;
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Temp: ");
  lcd.print(temperature);
  lcd.print(" C");
  delay(1000);
}
