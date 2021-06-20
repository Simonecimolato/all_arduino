int tempo = 4000; //dichiaro le variabili
int led = 13;
int butt = 7;

void setup() {
pinMode(led, OUTPUT); //definisco il led come output e il pulsante come input
pinMode(butt, INPUT);
}

void loop() {
if (digitalRead(butt)== HIGH){
  digitalWrite(led, !digitalRead(led));//cambia lo stato del led in base a quello che legge sul led stesso solo quando il bottone è premuto
while (digitalRead(butt)==HIGH);{
}
}
}

