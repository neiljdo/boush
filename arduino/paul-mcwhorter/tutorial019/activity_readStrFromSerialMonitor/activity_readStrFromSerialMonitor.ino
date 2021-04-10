String promptColor = String("Enter which color LED to blink\n") \
                   + String("(red / yellow / green):");
String promptNum = "Enter the number of times to blink LED:";
int num;
String color;
int targetLED;
int redLED = 11;
int yellowLED = 10;
int greenLED = 9;
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
  pinMode(yellowLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(promptColor);
  // Do nothing while waiting for user input
  while (Serial.available() == 0);
  color = Serial.readString();

  if (color == "red") {
    targetLED = redLED;
  } else if (color == "yellow") {
    targetLED = yellowLED;
  } else if (color == "green") {
    targetLED = greenLED;
  } else {
    targetLED = NULL;
  }

  if (targetLED) {
    Serial.println(promptNum);
    // Do nothing while waiting for user input
    while (Serial.available() == 0);

    // Blink LED the specified number of times
    num = Serial.parseInt();
    while (num > 0) {
      blinkLED(targetLED);
      num--;
    }
  } else {
    Serial.println("Invalid color. Please try again.");
  }

}
