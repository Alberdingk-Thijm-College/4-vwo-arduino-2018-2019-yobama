const int ledR1 = 1;
const int ledG1 = 2;
const int ledR2 = 3;
const int ledG2 = 4;
const int ledR3 = 5;
const int ledG3 = 6;
const int ledR4 = 7;
const int ledG4 = 8;
const int b1g = 10;
const int b1r = 11;
const int b2g = 12;
const int b2r = 13;
const int kb1 = A1;
const int kb2 = A2;
const int del = 1000;


void setup()
{
  pinMode(ledR1, OUTPUT);
  pinMode(ledG1, OUTPUT);
  pinMode(ledR2, OUTPUT);
  pinMode(ledG2, OUTPUT);
  pinMode(ledR3, OUTPUT);
  pinMode(ledG3, OUTPUT);
  pinMode(ledR4, OUTPUT);
  pinMode(ledG4, OUTPUT);
  pinMode(b1g, OUTPUT);
  pinMode(b1r, OUTPUT);
  pinMode(b2g, OUTPUT);
  pinMode(b2r, OUTPUT);
  pinMode(kb1, OUTPUT);
  pinMode(kb2, OUTPUT);
  digitalWrite(kb1, LOW);
  digitalWrite(kb2, LOW);

}

void GL()
{
  digitalWrite(ledG1, HIGH);
  digitalWrite(ledG2, LOW);
  digitalWrite(ledG3, LOW);
  digitalWrite(ledG4, LOW);
  digitalWrite(ledR1, LOW);
  digitalWrite(ledR2, HIGH);
  digitalWrite(ledR3, HIGH);
  digitalWrite(ledR4, HIGH);
  digitalWrite(b1g, LOW);
  digitalWrite(b1r, HIGH);
  digitalWrite(b2g, LOW);
  digitalWrite(b2r, HIGH);
  delay(del);
}

void GB()
{
  digitalWrite(ledG1, LOW);
  digitalWrite(ledG2, HIGH);
  digitalWrite(ledG3, LOW);
  digitalWrite(ledG4, LOW);
  digitalWrite(ledR1, HIGH);
  digitalWrite(ledR2, LOW);
  digitalWrite(ledR3, HIGH);
  digitalWrite(ledR4, HIGH);
  digitalWrite(b1g, LOW);
  digitalWrite(b1r, HIGH);
  digitalWrite(b2g, LOW);
  digitalWrite(b2r, HIGH);
  delay(del);
}

void GR()
{
  digitalWrite(ledG1, LOW);
  digitalWrite(ledG2, LOW);
  digitalWrite(ledG3, HIGH);
  digitalWrite(ledG4, LOW);
  digitalWrite(ledR1, HIGH);
  digitalWrite(ledR2, HIGH);
  digitalWrite(ledR3, LOW);
  digitalWrite(ledR4, HIGH);
  digitalWrite(b1g, LOW);
  digitalWrite(b1r, HIGH);
  digitalWrite(b2g, LOW);
  digitalWrite(b2r, HIGH);
  delay(del);
}

void GO()
{
  digitalWrite(ledG1, LOW);
  digitalWrite(ledG2, LOW);
  digitalWrite(ledG3, LOW);
  digitalWrite(ledG4, HIGH);
  digitalWrite(ledR1, HIGH);
  digitalWrite(ledR2, HIGH);
  digitalWrite(ledR3, HIGH);
  digitalWrite(ledR4, LOW);
  digitalWrite(b1g, LOW);
  digitalWrite(b1r, HIGH);
  digitalWrite(b2g, LOW);
  digitalWrite(b2r, HIGH);
  delay(del);
}

void BL()
{
  digitalWrite(ledG1, LOW);
  digitalWrite(ledG2, LOW);
  digitalWrite(ledG3, LOW);
  digitalWrite(ledG4, LOW);
  digitalWrite(ledR1, HIGH);
  digitalWrite(ledR2, HIGH);
  digitalWrite(ledR3, HIGH);
  digitalWrite(ledR4, HIGH);
  digitalWrite(b1g, HIGH);
  digitalWrite(b1r, LOW);
  delay(del);
}

void BR()
{
  digitalWrite(ledG1, LOW);
  digitalWrite(ledG2, LOW);
  digitalWrite(ledG3, LOW);
  digitalWrite(ledG4, LOW);
  digitalWrite(ledR1, HIGH);
  digitalWrite(ledR2, HIGH);
  digitalWrite(ledR3, HIGH);
  digitalWrite(ledR4, HIGH);
  digitalWrite(b2g, HIGH);
  digitalWrite(b2r, LOW);
  delay(del);
}


void loop()
{
  if (digitalRead(kb1) == LOW && digitalRead(kb2) == LOW){
 	 GL();
 	 delay(del);
  }
  if (digitalRead(kb1) == LOW && digitalRead(kb2) == LOW){
 	 GB();
 	 delay(del);
  }
  if (digitalRead(kb1) == LOW && digitalRead(kb2) == LOW){ 
 	 GR();
 	 delay(del);
  }
  if (digitalRead(kb1) == LOW && digitalRead(kb2) == LOW){
 	 GO();
  	 delay(del);
  }

  if (digitalRead(kb1) == HIGH)
  {
   BL();
   delay(del);
  }
  
  if (digitalRead(kb2) == HIGH)
  {
   BR();
   delay(del);
  }
  }
