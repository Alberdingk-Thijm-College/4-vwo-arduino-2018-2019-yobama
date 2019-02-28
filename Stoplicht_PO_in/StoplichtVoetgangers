int ledR1 = 1;
int ledG1 = 2;
int ledR2 = 3;
int ledG2 = 4;
int ledR3 = 5;
int ledG3 = 6;
int ledR4 = 7;
int ledG4 = 8;
int vR = 10;
int vG = 9;
int del = 1000;
int kV = A1;

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
  pinMode(vR, OUTPUT);
  pinMode(vG, OUTPUT);
  pinMode(kV, OUTPUT);
  digitalWrite(kV, LOW);

}

void loop()
{
 
  digitalWrite(ledG1, HIGH);
  digitalWrite(ledG2, LOW);
  digitalWrite(ledG3, LOW);
  digitalWrite(ledG4, LOW);
  digitalWrite(ledR1, LOW);
  digitalWrite(ledR2, HIGH);
  digitalWrite(ledR3, HIGH);
  digitalWrite(ledR4, HIGH);
  digitalWrite(vR, HIGH);
  digitalWrite(vG, LOW);
  delay(del);
  
  digitalWrite(ledG1, LOW);
  digitalWrite(ledG2, HIGH);
  digitalWrite(ledG3, LOW);
  digitalWrite(ledG4, LOW);
  digitalWrite(ledR1, HIGH);
  digitalWrite(ledR2, LOW);
  digitalWrite(ledR3, HIGH);
  digitalWrite(ledR4, HIGH);
  digitalWrite(vR, HIGH);
  digitalWrite(vG, LOW);
  delay(del);
  
  digitalWrite(ledG1, LOW);
  digitalWrite(ledG2, LOW);
  digitalWrite(ledG3, HIGH);
  digitalWrite(ledG4, LOW);
  digitalWrite(ledR1, HIGH);
  digitalWrite(ledR2, HIGH);
  digitalWrite(ledR3, LOW);
  digitalWrite(ledR4, HIGH);
  digitalWrite(vR, HIGH);
  digitalWrite(vG, LOW);
  delay(del);
  
  digitalWrite(ledG1, LOW);
  digitalWrite(ledG2, LOW);
  digitalWrite(ledG3, LOW);
  digitalWrite(ledG4, HIGH);
  digitalWrite(ledR1, HIGH);
  digitalWrite(ledR2, HIGH);
  digitalWrite(ledR3, HIGH);
  digitalWrite(ledR4, LOW);
  digitalWrite(vR, HIGH);
  digitalWrite(vG, LOW);
  delay(del);
 

   if (digitalRead(kV) == HIGH)
  {
  digitalWrite(ledG1, LOW);
  digitalWrite(ledG2, LOW);
  digitalWrite(ledG3, LOW);
  digitalWrite(ledG4, LOW);
  digitalWrite(ledR1, HIGH);
  digitalWrite(ledR2, HIGH);
  digitalWrite(ledR3, HIGH);
  digitalWrite(ledR4, HIGH);
  digitalWrite(vR, LOW);
  digitalWrite(vG, HIGH);
  delay(del);
  }
 
}
