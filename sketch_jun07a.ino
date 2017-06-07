int ledPin = 13;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);  //takes variable of input or output
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledPin, HIGH); //initial off
  delay(2000);
  digitalWrite(ledPin, LOW);
  delay(2000);
}
