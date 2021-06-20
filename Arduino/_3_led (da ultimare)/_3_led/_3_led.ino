int a1 = 0;
int led1=13;
int led2=7;
int led3=6;
int b1=2;
int tempo=175;

void setup() {
pinMode(led1, OUTPUT);//dichiarazione variabili e inizializzazione pin
pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT);
pinMode(b1, OUTPUT);
}

void loop() {
a1 = digitalRead(2);
if(a1 == HIGH){
   for (int c=0;c=c;c=0)
  {
  digitalWrite(led1, !digitalRead(led1));
  delay(tempo);
  digitalWrite(led2, !digitalRead(led2));
  delay(tempo);
  digitalWrite(led3, !digitalRead(led3));
  delay(tempo);
  digitalWrite(led1, !digitalRead(led1));
  delay(tempo);
  digitalWrite(led2, !digitalRead(led2));
  delay(tempo);
  digitalWrite(led3, !digitalRead(led3));
  delay(tempo);
  }
}
else if (a1==LOW){
  for (int a=1;a=a;a=0)
  {
  digitalWrite(led1, !digitalRead(led1));
  delay(tempo);
  digitalWrite(led2, !digitalRead(led2));
  delay(tempo);
  digitalWrite(led3, !digitalRead(led3));
  delay(tempo);
  digitalWrite(led1, !digitalRead(led1));
  delay(tempo);
  digitalWrite(led2, !digitalRead(led2));
  delay(tempo);
  digitalWrite(led3, !digitalRead(led3));
  delay(tempo);
  }
}
}

