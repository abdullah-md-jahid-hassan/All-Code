#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

int s=A0;

LiquidCrystal_I2C lcd(0x27,16,2); 
void setup()
{
  lcd.begin(16,2);
  lcd.backlight();
  pinMode(s,INPUT);
  lcd.print("Turbidity: ");
}

void loop()
{
  int v=analogRead (s);
  lcd.setCursor(11,0);
  lcd.print(v);
  lcd.setCursor(0,1);
  if(v>500)
  {
    lcd.print("It's clear");
  }
  else if(v<500)
  {
    lcd.print("It's not clear");
  }
  delay(1000);
  lcd.setCursor(11,0);
  lcd.print("   ");
  lcd.setCursor(0,1);
  lcd.print("                ");
}
