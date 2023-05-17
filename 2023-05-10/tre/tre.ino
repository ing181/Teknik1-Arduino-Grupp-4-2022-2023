// Variabler som vi skapar här
// finns i hela programmet
int sensor;
void setup() {
  // put your setup code here, to run once:
  // Kontakt etableras med din PC, serieporten används
  // Arduino och PC:n kommer överens om hur kommunikationen
  // ska gå till. Bland annat att hastigheten ska vara 9600 Buad
  Serial.begin(9600);
  // "pin" A0 (står A0 på Arduinon) ställs in för att användas för
  // input, invärde till Arduinon
  pinMode(A0,INPUT);
  // "pin" 7 och 8 (står 7 och 8 på Arduinon) ställs in för att användas för
  // output, utvärde från Arduinon
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  // Variabeln "sensor" tilldelas (får värde) från
  // pin A0.
  // Ändring av ljuset som lyser på den ljuskänsliga resistorn gör att spänningen 
  // ändras.
  // Arduino förvandlar spänningen till heltal som går att behandla 
  sensor = analogRead(A0);
  // Siffervärdet som "sensor" har skrivs ut på din PC
  Serial.println(sensor);
  // Om sensor är större än 600 
  if (sensor > 600) { // Gör det som börjar här
    //  Serial.println("SANT!");
      // Lysdiod kopplad till pin 7 ska lysa
      digitalWrite(7,HIGH);
      // Lysdiod kopplad till pin 8 ska vara släkt
      digitalWrite(8,LOW);

  } // och slutar här
  // Om inte (sensor > 600) är sant
  // prövas nästa vilkor (sensor > 400)
  else if (sensor > 400) {
    //Serial.println("FALSKT!");
    digitalWrite(8,HIGH);
    digitalWrite(7,LOW);
  }
  // Om inget är sant
  // varken (sensor > 600) eller (sensor > 400)
  // så ska båda lysdioderna lysa.
  else {
    digitalWrite(8,HIGH);
    digitalWrite(7,HIGH);
  }

}
