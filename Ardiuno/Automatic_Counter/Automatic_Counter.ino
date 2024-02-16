#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
int bazar=11,sensor=5,result;
void show (String fl, String sl)
{
  lcd.clear();
  tone(bazar,1000);
  delay(100);
  noTone(bazar);
  lcd.print (fl);
  lcd.setCursor(0,1);
  lcd.print (sl);
  delay(1500);
}
void setup()
{
  lcd.init();
  lcd.backlight();
  lcd.clear();

//  show ("Project Name:", "Auto Counter");
//  show ("Course: CSC 439", "Section: D");
//  show ("Team Members: 3", "");
//  show ("A.M. Jahid Hassan", "ID: 20203020");
//  show ("Rabaka Remo", "ID: 20203037");
//  show ("Arif Mahmud", "ID: 20203030");
//  show ("Let's begain", "The Counting.");
  
  lcd.clear();
  lcd.print ("Counter");
  lcd.setCursor(0,1);
  lcd.print ("Count:");
  pinMode(sensor,INPUT);
  pinMode(bazar,OUTPUT);
  result=0;
  lcd.setCursor(6,1);
  lcd.print (result);
  
  for (int i=0; i<3; i++)
    {
      tone(bazar,1000);
      delay(100);
      noTone(bazar);
      delay(100);
    }
}

void loop()
{
 bool i=digitalRead(sensor);
 if(i==0)
 {
  delay(500);
  i=digitalRead(sensor);
  if(i==0)
  {
    while (i==0)
    {
      tone(bazar,1000);
      lcd.setCursor(6,1);
      lcd.print ("Stack");
      delay(100);
      noTone(bazar);
      i=digitalRead(sensor);
    }
  }
  result++;
  tone(bazar,1000);
  lcd.setCursor(6,1);
  lcd.print (result);
  lcd.print ("           ");
  delay(100);
  noTone(bazar);
 }
}
