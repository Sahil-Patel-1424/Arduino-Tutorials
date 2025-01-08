void setup() {
  // put your setup code here, to run once:

  // set pin 13 as an output signal
  pinMode(13, OUTPUT);

  // set pin 12 as an output signal
  pinMode(12, OUTPUT);

  // set pin 11 as an output signal
  pinMode(11, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  // red led blink 5 times
  for (int i = 0; i < 5; i++) {
    // turn pin 13 on
    digitalWrite(13, HIGH);

    // wait for 0.1 seconds to see pin 13 on
    delay(100);

    // turn pin 13 off
    digitalWrite(13, LOW);

    // wait of 0.9 seconds to see pin 13 off
    delay(900);
  }

  // green led blink 10 times
  for (int i = 0; i < 10; i++) {
    // turn pin 12 on
    digitalWrite(12, HIGH);

    // wait for 0.1 seconds to see pin 12 on
    delay(100);

    // turn pin 12 off
    digitalWrite(12, LOW);

    // wait of 0.9 seconds to see pin 12 off
    delay(900);
  }

  // blue led blink 15 times
  for (int i = 0; i < 10; i++) {
    // turn pin 11 on
    digitalWrite(11, HIGH);

    // wait for 0.1 seconds to see pin 11 on
    delay(100);

    // turn pin 11 off
    digitalWrite(11, LOW);

    // wait of 0.9 seconds to see pin 11 off
    delay(900);
  }
}
