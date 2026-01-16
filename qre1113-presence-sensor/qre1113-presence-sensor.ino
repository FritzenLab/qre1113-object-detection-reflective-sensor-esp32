int analogValue= 0;
long sensorTime= 0;

void setup() {
  
  Serial.begin(115200);
  pinMode(D8, OUTPUT);
}

void loop() {
  
  if(millis() - sensorTime > 50){
    sensorTime= millis();
    analogValue= analogRead(A2);
    Serial.println(analogValue);
    if(analogValue < 2000){
      digitalWrite(D8, HIGH);
    }else{
      digitalWrite(D8, LOW);
    }
  } 
  
}
