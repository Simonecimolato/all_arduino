//inclusione libreria, dichiarazione variabili e servo
#include <Servo.h>
Servo servo;
int const pinpoten =A0; 
int valorepoten;
int angolo;

void setup() {
servo.attach(9);//dichiarazione pin del servo e connessione seriale
Serial.begin(9600);
}

void loop() {
valorepoten = analogRead(pinpoten);
Serial.print(valorepoten);
angolo = map(valorepoten,0,1023,0,179);
Serial.print(angolo);
servo.write(angolo);
delay(25);

}
