int readPin = A0;
int readVal = 0;
float readConversion = 5./1023.;
float V = 0;
float YELLOW_MAX_VOLTAGE = 4.;
float YELLOW_MIN_VOLTAGE = 3.;
int delayMS = 500;
int redLED = 11;
int yellowLED = 10;
int greenLED = 9;


void setup() {
  // put your setup code here, to run once:
  pinMode(readPin, INPUT);
  pinMode(redLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
  Serial.begin(9600);
}

void turnOffLEDs() {
  digitalWrite(redLED, LOW);
  digitalWrite(greenLED, LOW);
  digitalWrite(yellowLED, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  readVal = analogRead(readPin);
  V = readVal * readConversion;
  Serial.print("Voltage = ");
  Serial.print(V);
  Serial.println(" V");

  turnOffLEDs();
  if (V > 0.) {
    if (V > YELLOW_MAX_VOLTAGE) {
      digitalWrite(redLED, HIGH);
    } else if (V <= YELLOW_MIN_VOLTAGE) {
      digitalWrite(greenLED, HIGH);
    } else {
      digitalWrite(yellowLED, HIGH);
    }
  }

  delay(delayMS);
}
