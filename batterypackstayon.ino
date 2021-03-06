const int trigPin = 13; // use pin 13 to show an LED pulse each time a pulse is sent out
const int msToWait = 3000; //ms to wait for between each pulse
const int switchDelay = 500; //ms to wait between toggling high and low

void setup() {
  pinMode(trigPin, OUTPUT);
}

void loop() {
  digitalWrite(trigPin, HIGH);
  delay(switchDelay);
  digitalWrite(trigPin, LOW);
  delay(msToWait);
}
