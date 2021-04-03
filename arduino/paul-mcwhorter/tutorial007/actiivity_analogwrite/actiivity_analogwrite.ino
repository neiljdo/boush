int redPin = 9;
int maxAnalog = 255;
int delayMS = 1000;

void setup() {
  // put your setup code here, to run once:
  pinMode(redPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 0; i <= 8; i++) {
    analogWrite(redPin, maxAnalog / pow(2, i));
    delay(delayMS);
  }
}
