// LDR Sensor with LED - Arduino Project
int ldrPin = A0;
int ledPin = 13;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int lightValue = analogRead(ldrPin);
  Serial.println(lightValue);

  if (lightValue < 500) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }
  delay(1000);
}
