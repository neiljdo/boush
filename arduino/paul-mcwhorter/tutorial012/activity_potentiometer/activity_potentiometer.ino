int readPin = A0;
int readVal = 0;
float readConversion = 5./1023.;
float V = 0.;
int delayMS = 1000;


void setup() {
  // put your setup code here, to run once:
  pinMode(readPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  readVal = analogRead(readPin);
  V = readVal * readConversion;
  Serial.print("Voltage = ");
  Serial.print(V);
  Serial.println(" V");
  delay(delayMS);
}
