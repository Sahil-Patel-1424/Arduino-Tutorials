void setup() {
  // put your setup code here, to run once:

  // set pin 13 as an output signal
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  // turn pin 13 on
  digitalWrite(13, HIGH);

  // wait for 0.015 seconds to see pin 13 on
  delay(15);

  // turn pin 13 off
  digitalWrite(13, LOW);

  // wait for 0.015 seconds to see pin 13 off
  delay(15);
}
