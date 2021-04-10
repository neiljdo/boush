String prompt = "Enter the number of times to blink LED:";
int num;
int redLED = 11;
int delayMS = 250;


void blinkLED(int pin) {
  digitalWrite(pin, HIGH);
  delay(delayMS);
  digitalWrite(pin, LOW);
  delay(delayMS);
}

void setup() {
  // put your setup code here, to run once:
  pinMode(redLED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(prompt);
  // Do nothing while waiting for user input
  while (Serial.available() == 0);

  // Blink LED the specified number of times
  num = Serial.parseInt();
  while (num > 0) {
    blinkLED(redLED);
    num--;
  }
}
