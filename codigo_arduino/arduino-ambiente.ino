// definindo pinos dos sensores
int sensorPin = 2; //sensor de proximidade             
int fanPin    = 4; //rele para ligar ventilação
// valor inicial do sensor de proximidade
int sensorValue = 0;                    
 
void setup() {
  pinMode(fanPin, OUTPUT);      // ventilacao OUTPUT
  pinMode(sensorPin, INPUT);    // sensor de proximidade INPUT
 
  Serial.begin(9600);
}
 
void loop(){
  sensorValue = digitalRead(sensorPin);  // le sensor de proximidade
}