float delayMS = 250;
int redPin = 13;
int redFreq = 5;
int greenPin = 12;
int greenFreq = 10;
int bluePin = 11;
int blueFreq = 15; 

void setup() {
  // put your setup code here, to run once:
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  // blink red LED 5 times
  for (int i = 0; i < redFreq; i++) {
    digitalWrite(redPin, HIGH);
    delay(delayMS);
    digitalWrite(redPin, LOW);
    delay(delayMS);
  }
  
  // blink green LED 10 times
  for (int i = 0; i < greenFreq; i++) {
    digitalWrite(greenPin, HIGH);
    delay(delayMS);
    digitalWrite(greenPin, LOW);
    delay(delayMS);
  }

  // blink blue LED 15 times
  for (int i = 0; i < blueFreq; i++) {
    digitalWrite(bluePin, HIGH);
    delay(delayMS);
    digitalWrite(bluePin, LOW);
    delay(delayMS);
  }
}
