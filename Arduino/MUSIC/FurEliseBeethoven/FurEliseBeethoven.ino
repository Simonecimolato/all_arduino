//int speakerPin = buzz;
//
//char notes[] = "EDEDEbDCaceabegbCeEDEDEbDCaceabeCbaEDEDEbDCaceabegbCeEDEDEbDCaceabeCbabCDEgFEDfEDCeDCbeEeEDEDEDEDEDEDEbDCaceabegbCeEDEDEbDCaceabeCba";
//
////              E D E D E b D C a c e a b e g b C e E D|E D E b D C a c e a b e C b a E D E D E b D C|a c e a b e g b C e E D E D E b D C a c e a|b e C b a b C D E g F E D f E D C e D C|b e E e E D E D E D E D E D E D E b D C a c e a b e g b C e E D E D E b D C a c e a b e C b a
//int beats[] = { 1,1,1,1,1,1,1,1,3,1,1,1,3,1,1,1,3,1,1,1,1,1,1,1,1,1,3,1,1,1,3,1,1,1,3,1,1,1,1,1,1,1,1,3,1,1,1,3,1,1,1,3,1,1,1,1,1,1,1,1,1,3,1,1,1,3,1,1,1,3,1,1,1,2,1,1,1,2,1,1,1,2,1,1,1,3,1,5,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,1,1,1,3,1,1,1,3,1,1,1,1,1,1,1,1,1,3,1,1,1,3,1,1,1,6};
//int tempo = 175;
//
//void playTone(int tone, int duration) {
//  for (long i = 0; i < duration * 800LL; i += tone * 2) {
//    digitalWrite(speakerPin, HIGH);
//    delayMicroseconds(tone);
//    digitalWrite(speakerPin, LOW);
//    delayMicroseconds(tone);
//  }
//}
//
//void playNote(char note, int duration) {
//  char names[] = {'c','d','e','f','g','a','b','C', 'D', 'E', 'F', 'G', 'A', 'B', 'U'};
//  int tones[] = {3buzz22,3424,3033,2buzz64,2551,2272,2024, 1915, 1700, 1519, 1432, 1275, 1136, buzz14, 956};
//
//// play the tone corresponding to the note name
//  for (int i = 0; i < sizeof(tones); i++) {
//    if (names[i] == note) {
//      playTone(tones[i], duration);
//    }
//  }
//}
//
//void setup() {
//  pinMode(speakerPin, OUTPUT);
//}
//void loop() {
//  for (int i = 0; i < sizeof(notes); i++) {
//    if (notes[i] == ' ') {
//      delay(beats[i] * tempo); // rest
//    } else {
//      playNote(notes[i], beats[i] * tempo);
//    }
//    // pause between notes
//    delay(tempo / 2);
//    if (i == sizeof(notes)-1){
//      delay(80000);
//    }
//  }
//}
int buzz = 8;
int tempo1 = 350;
int tempo2 = 400;
int tempo3 = 800;
int tempo4 = 300;

void setup() {
  pinMode(buzz, OUTPUT);
}

void loop() {
  // play e4
  delay(600);
  tone(buzz, 329.63);
  delay(tempo1);
  // play d4#
  tone(buzz, 311.13);
  delay(tempo1);
  // play e4
  tone( buzz, 329.63);
  delay(tempo1);
  // play d4#
  tone( buzz, 311.13);
  delay(tempo1);
  // play e4
  tone(buzz, 329.63);
  delay(tempo1);
  // play b3
  tone( buzz, 246.94);
  delay(tempo2);
  // play d4
  tone(buzz, 293.66, 300);
  delay(tempo2);
  // play c4
  tone(buzz, 261.63, 300);
  delay(tempo2);
  // play a3
  tone(buzz, 220, 900);
  delay(tempo3);
  // play d3
  tone(buzz, 146.83, 300);
  delay(tempo1);
  //play f3
  tone(buzz, 174.61, 300);
  delay(tempo2);
  //play a3
  tone(buzz, 220, 300);
  delay(tempo2);
  // play b3
  tone(buzz, 246.94, 900);
  delay(tempo3);
  // play f3
  tone(buzz, 174.61, 300);
  delay(tempo2);
  // play a3#
  tone(buzz, 233.08, 300);
  delay(tempo2);
  // play b3
  tone(buzz, 246.94, 300);
  delay(tempo2);
  // play c4
  tone(buzz, 261.63, 900);
  delay(tempo3);
  delay(tempo4);
  // play e4
  tone(buzz, 329.63, 300);
  delay(tempo2);
  // play d4#
  tone(buzz, 311.13, 300);
  delay(tempo2);
  // play e4
  tone(buzz, 329.63, 300);
  delay(tempo2);
  // play d4#
  tone(buzz, 311.13, 300);
  delay(tempo2);
  // play e4
  tone(buzz, 329.63, 300);
  delay(tempo2);
  // play b3
  tone(buzz, 246.94, 300);
  delay(tempo2);
  // play d4
  tone(buzz, 293.66, 300);
  delay(tempo2);
  // play c4
  tone(buzz, 261.63, 300);
  delay(tempo2);
  // play a3
  tone(buzz, 220, 900);
  delay(tempo3);
  // play d3
  tone(buzz, 146.83, 300);
  delay(tempo2);
  // play f3
  tone(buzz, 174.61, 300);
  delay(tempo2);
  // play a3
  tone(buzz, 220, 300);
  delay(tempo2);
  // play b3
  tone(buzz, 246.94, 900);
  delay(tempo3);
  // play f3
  tone(buzz, 174.61, 300);
  delay(tempo2);
  // play c4
  tone(buzz, 261.63, 300);
  delay(tempo2);
  // play b3
  tone(buzz, 246.94, 300);
  delay(tempo2);
  // play a3
  tone(buzz, 220, 900);
  delay(tempo3);
  // play b3
  tone(buzz, 246.94, 300);
  delay(tempo2);
  // play c4
  tone(buzz, 261.63, 300);
  delay(tempo2);
  // play d4
  tone(buzz, 293.66, 300);
  delay(tempo2);
  // play e4
  tone(buzz, 329.63, 900);
  delay(tempo3);
  // play g3
  tone(buzz, 196, 300);
  delay(tempo2);
  // play f4
  tone(buzz, 349.23, 300);
  delay(tempo2);
  //play e4
  tone(buzz, 329.23, 300);
  delay(tempo2);
  // play d4
  tone(buzz, 293.63, 900);
  delay(tempo3);
  // play e3
  tone(buzz, 164.81, 300);
  delay(tempo2);
  // play e4
  tone(buzz, 329.63, 300);
  delay(tempo2);
  // play d4
  tone(buzz, 293.63, 300);
  delay(tempo2);
  // play c4
  tone(buzz, 261.63, 900);
  delay(tempo3);
  // play d3
  tone(buzz, 146.83, 300);
  delay(tempo2);
  // play d4
  tone(buzz, 293.63, 300);
  delay(tempo2);
  // play c4
  tone(buzz, 261.63, 300);
  delay(tempo2);
  // play b3
  tone(buzz, 246.94, 900);
  delay(tempo3);
  delay(tempo2);
  // play e4
  tone(buzz, 329.63, 300);
  delay(tempo2);
  // play d4#
  tone(buzz, 311.13, 300);
  delay(tempo1);
  // play e4
  tone( buzz, 329.63, 300);
  delay(tempo1);
  // play d4#
  tone( buzz, 311.13, 300);
  delay(tempo1);
  // play e4
  tone(buzz, 329.63, 300);
  delay(tempo1);
  // play b3
  tone( buzz, 246.94, 300);
  delay(tempo2);
  // play d4
  tone(buzz, 293.66, 300);
  delay(tempo2);
  // play c4
  tone(buzz, 261.63, 300);
  delay(tempo2);
  // play a3
  tone(buzz, 220, 900);
  delay(tempo3);
  // play d3
  tone(buzz, 146.83, 300);
  delay(tempo1);
  //play f3
  tone(buzz, 174.61, 300);
  delay(tempo2);
  //play a3
  tone(buzz, 220, 300);
  delay(tempo2);
  // play b3
  tone(buzz, 246.94, 900);
  delay(tempo3);
  // play f3
  tone(buzz, 174.61, 300);
  delay(tempo2);
  // play a3
  tone(buzz, 233.08, 300);
  delay(tempo2);
  // play b3
  tone(buzz, 246.94, 300);
  delay(tempo2);
  // play c4
  tone(buzz, 261.63, 900);
  delay(tempo3);
  delay(tempo4);
  // play e4
  tone(buzz, 329.63, 300);
  delay(tempo2);
  // play d4#
  tone(buzz, 311.13, 300);
  delay(tempo2);
  // play e4
  tone(buzz, 329.63, 300);
  delay(tempo2);
  // play d4#
  tone(buzz, 311.13, 300);
  delay(tempo2);
  // play e4
  tone(buzz, 329.63, 300);
  delay(tempo2);
  // play b3
  tone(buzz, 246.94, 300);
  delay(tempo2);
  // play d4
  tone(buzz, 293.66, 300);
  delay(tempo2);
  // play c4
  tone(buzz, 261.63, 300);
  delay(tempo2);
  // play a3
  tone(buzz, 220, 900);
  delay(tempo3);
  // play d3
  tone(buzz, 146.83, 300);
  delay(tempo2);
  // play f3
  tone(buzz, 174.61, 300);
  delay(tempo2);
  // play a3
  tone(buzz, 220, 300);
  delay(tempo2);
  // play b3
  tone(buzz, 246.94, 900);
  delay(tempo3);
  // play f3
  tone(buzz, 174.61, 300);
  delay(tempo2);
  // play c4
  tone(buzz, 261.63, 300);
  delay(tempo2);
  // play b3
  tone(buzz, 246.94, 300);
  delay(tempo2);
  // play a3
  tone(buzz, 220, 900);
  delay(tempo3);
  delay(10000);
}
