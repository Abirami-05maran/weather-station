#include <DHT.h>
#include <LiquidCrystal.h>
LiquidCrystal lcd(8,9,10,11,12,13);
DHT dht(7,DHT11);
void setup()
{
  lcd.begin(16,2):
  dht.begin();
}
void loop()
{
  float t=dht.readTemperature();
  float h=dht.readHumidity();
  if(isnan(t)||isnan(h))
  return;
  lcd.setCursor(0, 0);
  lcd.print("T:");
  lcd.print(t);
  lcd.print("C");
  lcd.setCursor(0,1);
  lcd.print("H:");
  lcd.print(h);
  lcd.print("%");
  delay(2000);
}
