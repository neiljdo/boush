int readPin = A0;
int readVal = 0;
float readConversion = 5./1023.;
float V = 0;
float THRESHOLD_VOLTAGE = 4.;
int delayMS = 500;
int warningLED = 9;


void setup() {
  // put your setup code here, to run once:
  pinMode(readPin, INPUT);
  pinMode(warningLED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  readVal = analogRead(readPin);
  V = readVal * readConversion;
  Serial.print("Voltage = ");
  Serial.print(V);
  Serial.println(" V");

  if (V > THRESHOLD_VOLTAGE) {
    Serial.print("Voltage above threshold of ");
    Serial.print(THRESHOLD_VOLTAGE);
    Serial.println(" V");
    digitalWrite(warningLED, HIGH);
  } else {
    digitalWrite(warningLED, LOW);
  }

  delay(delayMS);
}
