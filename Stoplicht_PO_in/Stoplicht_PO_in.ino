/*Kleuren voor de stoplichten, g1 t/m g4 is groen en r1 t/m r4 is rood. Door rood en groen te mengen krijg je oranje.
dus als je een rgb-led gebruikt kan je alle kleuren in 1 led laten zien door te mengen. 
Als je geen rgb gebruikt is oranje zodra 2 lampjes tegelijk branden.*/
int g1 = 9;
int g2 = 6;
int g3 = 7;
int g4 = 8;
int r1 = 2;
int r2 = 3;
int r3 = 4;
int r4 = 5;

//Knopen voor auto's
int b1 = A0;
int b2 = A1;
int b3 = A2;
int b4 = A3;

//Knoppen voor busbanen
int bb1 = A4;
int bb2 = A5;

//Hier kan je makkelijk de duur van het groene stoplicht veranderen
int del = 1000;

void setup()
{  
  //Knopen van Auto's
  pinMode(b1, OUTPUT);
  pinMode(b2, OUTPUT);
  pinMode(b3, OUTPUT);
  pinMode(b4, OUTPUT);
  
  /*Omdat de knoppen van de Auto's op Analog zijn aangesloten zijn ze op high gezet, 
  zo kan de arduino meten of ze naar - getrokken zijn.*/  
  digitalWrite(b1, HIGH);
  digitalWrite(b2, HIGH);
  digitalWrite(b3, HIGH);
  digitalWrite(b4, HIGH);
  
  //Knopen van bussen
  pinMode(bb1, OUTPUT);
  pinMode(bb2, OUTPUT);
  
  /*Omdat de knoppen van de bussen op Analog zijn aangesloten zijn ze op high gezet, 
  zo kan de arduino meten of ze naar grond getrokken zijn.*/
  digitalWrite(bb1, HIGH);
  digitalWrite(bb2, HIGH);
  
  //Kleuren
  pinMode(g1, OUTPUT);
  pinMode(g2, OUTPUT);
  pinMode(g3, OUTPUT);
  pinMode(g4, OUTPUT);
  pinMode(r1, OUTPUT);
  pinMode(r2, OUTPUT);
  pinMode(r3, OUTPUT);
  pinMode(r4, OUTPUT);
}

//Groen Links
void GL(){
  digitalWrite(g1, HIGH);
  digitalWrite(g2, LOW);
  digitalWrite(g3, LOW);
  digitalWrite(g4, LOW);
  digitalWrite(r1, LOW);
  digitalWrite(r2, HIGH);
  digitalWrite(r3, HIGH);
  digitalWrite(r4, HIGH);
}

//Groen Boven
void GB(){
  digitalWrite(g1, LOW);
  digitalWrite(g2, HIGH);
  digitalWrite(g3, LOW);
  digitalWrite(g4, LOW);
  digitalWrite(r1, HIGH);
  digitalWrite(r2, LOW);
  digitalWrite(r3, HIGH);
  digitalWrite(r4, HIGH);  
}

//Groen Rechts
void GR(){
  digitalWrite(g1, LOW);
  digitalWrite(g2, LOW);
  digitalWrite(g3, HIGH);
  digitalWrite(g4, LOW);
  digitalWrite(r1, HIGH);
  digitalWrite(r2, HIGH);
  digitalWrite(r3, LOW);
  digitalWrite(r4, HIGH);
}

//Groen Onder
void GO(){
  digitalWrite(g1, LOW);
  digitalWrite(g2, LOW);
  digitalWrite(g3, LOW);
  digitalWrite(g4, HIGH);
  digitalWrite(r1, HIGH);
  digitalWrite(r2, HIGH);
  digitalWrite(r3, HIGH);
  digitalWrite(r4, LOW);
}

//Oranje Links
void OL(){
  digitalWrite(g1, HIGH);
  digitalWrite(g2, LOW);
  digitalWrite(g3, LOW);
  digitalWrite(g4, LOW);
  digitalWrite(r1, HIGH);
  digitalWrite(r2, HIGH);
  digitalWrite(r3, HIGH);
  digitalWrite(r4, HIGH);
}

//Oranje Boven
void OB(){
  digitalWrite(g1, LOW);
  digitalWrite(g2, HIGH);
  digitalWrite(g3, LOW);
  digitalWrite(g4, LOW);
  digitalWrite(r1, HIGH);
  digitalWrite(r2, HIGH);
  digitalWrite(r3, HIGH);
  digitalWrite(r4, HIGH);
}

//Oranje Rechts
void OR(){
  digitalWrite(g1, LOW);
  digitalWrite(g2, LOW);
  digitalWrite(g3, HIGH);
  digitalWrite(g4, LOW);
  digitalWrite(r1, HIGH);
  digitalWrite(r2, HIGH);
  digitalWrite(r3, HIGH);
  digitalWrite(r4, HIGH);
}

//Oranje Onder
void OO(){
  digitalWrite(g1, LOW);
  digitalWrite(g2, LOW);
  digitalWrite(g3, LOW);
  digitalWrite(g4, HIGH);
  digitalWrite(r1, HIGH);
  digitalWrite(r2, HIGH);
  digitalWrite(r3, HIGH);
  digitalWrite(r4, HIGH);
}

//Clear (Dan gaat alles op rood)
void Clr(){
  digitalWrite(g1, LOW);
  digitalWrite(g2, LOW);
  digitalWrite(g3, LOW);
  digitalWrite(g4, LOW);
  digitalWrite(r1, HIGH);
  digitalWrite(r2, HIGH);
  digitalWrite(r3, HIGH);
  digitalWrite(r4, HIGH);
}

//Dit is een loop, het gaat dus de heletijd rond, zodra het klaar is met het onderste "Actieve" code gaat het weer bovenaan beginnen.
void loop(){
  if(digitalRead(b1) == LOW && digitalRead(bb2) == HIGH || digitalRead(bb1) == LOW && digitalRead(bb2) == HIGH)
  {
  //Linker Stoplicht
  GL();    
    if(digitalRead(b2) == LOW && digitalRead(bb1) == HIGH || digitalRead(b3) == LOW && digitalRead(bb1) == HIGH || digitalRead(b4) == LOW && digitalRead(bb1) == HIGH){
    delay(del);
  OL();
    delay(500);
    Clr();
    delay(200);  
  }
  }
  
  //Bovenste Stoplicht
  if(digitalRead(b2) == LOW && digitalRead(bb1) == HIGH && digitalRead(bb2) == HIGH) //Als er bij het linker of rechter stoplicht een bus staat,
  {                                          //wordt dit licht overgeslagen door de && (en)
  GB();
    if(digitalRead(b1) == LOW && digitalRead(b2) == LOW || digitalRead(b3) == LOW && digitalRead(b2) == LOW || digitalRead(b4) == LOW && digitalRead(b2) == LOW){
    delay(del);
  OB();
  delay(500);
  Clr();
  delay(200);  
    }
  }
  
  //Rechter Stoplicht
  if(digitalRead(b3) == LOW && digitalRead(bb1) == HIGH || digitalRead(bb2) == LOW) 
  {
  GR();
    if(digitalRead(b1) == LOW && digitalRead(b3) == LOW || digitalRead(b2) == LOW && digitalRead(b3) == LOW || digitalRead(b4) == LOW && digitalRead(b3) == LOW){
    delay(del);
    OR();
    delay(500);
  Clr();
  delay(200);  
    }
  }
  
  //Onderste Stoplicht
  if(digitalRead(b4) == LOW && digitalRead(bb1) == HIGH && digitalRead(bb2) == HIGH) //Als er bij het linker of rechter stoplicht een bus staat,
  {                                          //wordt dit licht overgeslagen door de && (en)
  GO();
    if(digitalRead(b1) == LOW && digitalRead(b4) == LOW || digitalRead(b2) == LOW && digitalRead(b4) == LOW || digitalRead(b3) == LOW && digitalRead(b4) == LOW){
  delay(del);
  OO();
    delay(500);
    Clr();
    delay(200);  
    }
  }
}