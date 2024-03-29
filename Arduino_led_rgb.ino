const int ledPin = 13;
const int buttonPin = 11;
boolean ledState = false;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  boolean buttonState = digitalRead(buttonPin);
  
  if (buttonState == HIGH) {
    ledState = !ledState;
    digitalWrite(ledPin, ledState);
    delay(200); 
  }
}

