int readPin = A0;
int readVal = 0;
// Analog write is [0, 255]
// Analog read is [0, 1023]
float readConversion = 255./1023.;
float V = 0;
int greenLED = 9;
int delayMS = 50;


void setup() {
  // put your setup code here, to run once:
  pinMode(readPin, INPUT);
  pinMode(greenLED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  readVal = analogRead(readPin);
  analogWrite(greenLED, readVal * readConversion);
  delay(delayMS);
}
