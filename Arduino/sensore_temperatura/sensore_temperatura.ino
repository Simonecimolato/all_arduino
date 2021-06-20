//dichiarazione variabili che mi servono
const int pinSen = A0;
int led = 10;
int sensvalT;

void setup() {
Serial.begin(9600);
pinMode(led, OUTPUT);
//inizio comunicazione seriale e inizializzazione del pin del led
}

void loop() {
//operazioni varie e conversioni per trovare il valore di output del led, la tensione e la temperatura in celsius
sensvalT= analogRead(pinSen);
int outputled= sensvalT;
float tensione= (sensvalT/1024.0)*5.0;
float Temp= (tensione - 0.5)*100;

//stampaggio dati nel monitor seriale
Serial.print("input sensore: ");
Serial.print(sensvalT);
Serial.print("               temperatura: ");
Serial.print(Temp);
Serial.print("               valore led: ");
Serial.println(outputled);

//output
analogWrite(led, outputled);
delay(5);

}
