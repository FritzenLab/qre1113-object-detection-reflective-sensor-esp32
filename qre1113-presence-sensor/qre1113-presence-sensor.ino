int analogValue= 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  //pinMode(D1, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogValue= analogRead(A2);
  Serial.println(analogValue);
  delay(50);
}
