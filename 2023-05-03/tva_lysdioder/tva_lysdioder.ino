int sensor;
void setup() {
  // put your setup code here, to run once:
  pinMode(7,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(A0,INPUT);
  Serial.begin(9600);
}


void loop() {
  // put your main code here, to run repeatedly:
sensor = analogRead(A0);
Serial.println(sensor);
/*
digitalWrite(10, HIGH);
digitalWrite(9, HIGH);
digitalWrite(7, HIGH);
*/

if (sensor > 700)
{
  digitalWrite(9, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(7, LOW);
}
else if (sensor > 400)
{
  digitalWrite(7, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);
}
else 
{
  digitalWrite(10, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(9, LOW);
}

}
