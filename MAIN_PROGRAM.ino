#include <LiquidCrystal.h>
LiquidCrystal lcd(32, 30, 28, 26, 24, 22);

#define FR 2
#define RV 3
#define RT 4
#define LT 5
#define UP 6
#define DW 7
#define LM1 8
#define LM2 9
#define RM1 10
#define RM2 11
#define FL1 12
#define FL2 13
void setup()  {
 
    lcd.begin(16, 2);
      lcd.setCursor(3, 0);
  lcd.print("SMS BASED");
    lcd.setCursor(5, 1);
  lcd.print("ROBOT");
  delay(3000);
   lcd.clear();

pinMode(FR,INPUT);
pinMode(RV,INPUT);
pinMode(RT,INPUT);
pinMode(LT,INPUT);
pinMode(UP,INPUT);
pinMode(DW,INPUT);
pinMode(LM1,OUTPUT);
pinMode(LM2,OUTPUT);
pinMode(RM1,OUTPUT);
pinMode(RM2,OUTPUT);
pinMode(FL1,OUTPUT);
pinMode(FL2,OUTPUT);
}

void loop() 
{

  lcd.setCursor(1, 0);
  lcd.print("CMND RECEIVED");
  {

if(digitalRead(FR)==HIGH)
{
   
     lcd.setCursor(4,1);
     lcd.print("FORWARD");
       digitalWrite(FL1,LOW);
  digitalWrite(FL2,LOW);
  digitalWrite(LM1,LOW);
  digitalWrite(LM2,HIGH);
  digitalWrite(RM1,LOW);
  digitalWrite(RM2,HIGH);
  delay(100);
   lcd.clear();
}
else if(digitalRead(RV)==HIGH)
{

     lcd.setCursor(4,1);
     lcd.print("REVERSE");
        digitalWrite(FL1,LOW);
  digitalWrite(FL2,LOW);
  digitalWrite(LM1,HIGH);
  digitalWrite(LM2,LOW);
  digitalWrite(RM1,HIGH);
  digitalWrite(RM2,LOW);
  delay(100);
   lcd.clear();
}
else if (digitalRead(RT)==HIGH)
{
   
     lcd.setCursor(4,1);
     lcd.print("RIGHT");
        digitalWrite(FL1,LOW);
  digitalWrite(FL2,LOW);
  digitalWrite(LM1,HIGH);
  digitalWrite(LM2,LOW);
  digitalWrite(RM1,LOW);
  digitalWrite(RM2,HIGH);
  delay(100);
   lcd.clear();
}
else if (digitalRead(LT)==HIGH)
{  

   lcd.setCursor(5,1);
     lcd.print("LEFT");
       digitalWrite(FL1,LOW);
  digitalWrite(FL2,LOW);
  digitalWrite(LM1,LOW);
  digitalWrite(LM2,HIGH);
  digitalWrite(RM1,HIGH);
  digitalWrite(RM2,LOW);
  delay(100);
   lcd.clear();
}

else if (digitalRead(UP)==HIGH)
{

   lcd.setCursor(3,1);
     lcd.print("PICKING UP");
  digitalWrite(FL1,HIGH);
  digitalWrite(FL2,LOW);
    digitalWrite(LM1,LOW);
  digitalWrite(LM2,LOW);
  digitalWrite(RM1,LOW);
  digitalWrite(RM2,LOW);
  delay(100);
   lcd.clear();

}

else if (digitalRead(DW)==HIGH)
{  

   lcd.setCursor(2,1);
     lcd.print("KEEPING DOWN");
  digitalWrite(FL1,LOW);
  digitalWrite(FL2,HIGH);
    digitalWrite(LM1,LOW);
  digitalWrite(LM2,LOW);
  digitalWrite(RM1,LOW);
  digitalWrite(RM2,LOW);
  delay(100);
   lcd.clear();

}
else
{
  digitalWrite(LM1,LOW);
  digitalWrite(LM2,LOW);
  digitalWrite(RM1,LOW);
  digitalWrite(RM2,LOW);
  digitalWrite(FL1,LOW);
  digitalWrite(FL2,LOW);
}

}}

