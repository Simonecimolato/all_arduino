/*Simone Cimolato, 20/05/2016
 * questo programma restituisce nel monitor seriale un valore maggiore di uno al precedente nella maetà del tempo ogni volta, 
 * sfortunatamente non può dimezzare il tempo all'infinito, ma è comunque interessante.
 */

//variabili
double tempo = 2000;
int a=0;
int b;

void setup() {
Serial.begin(9600);
}

void loop() {
for (int num1 = 1;num1 = num1;num1 +0) {
 tempo = tempo/2; //dimezzamento del tempo di esecuzione, calcolo risultato e stampaggio tempo e risultato nel monitor seriale
 b=a++;
  delay(tempo);
  Serial.print(b);
  Serial.print("    ");
  Serial.println(tempo);  
 //NOTA: la variabile tempo dopo 18 esecuzioni del ciclo si azzererà, quindi arduino (nel mio caso arduino uno) continuerà a fornire b+1 ma con la stessa tempistica
}
}
