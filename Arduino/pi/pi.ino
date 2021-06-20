const int PIN=8;
const int LED=12;
short int pitch;
int count;

void setup() {
pinMode(PIN, OUTPUT);
pinMode(LED, OUTPUT);
Serial.begin(9600);
}

void loop() {
  while (count<=10) {
    
  tone(8,pitch,100);
  Serial.println(pitch);
  digitalWrite(LED, HIGH);
  delay(200);
  pitch+=100;
  count++;
  digitalWrite(LED, LOW);
  
  
  }
count=0;
pitch=0;
Serial.println();
}
