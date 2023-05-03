int sensor;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(8,OUTPUT);
  pinMode(A0,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
 sensor=analogRead(A0);
 Serial.println(sensor);

}
