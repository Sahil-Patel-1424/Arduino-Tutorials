// initialize variables
int red_led_pin = 13;
int green_led_pin = 12;
int blue_led_pin = 11;
int fast = 250;
int slow = 500;
int real_slow = 750;
int long_delay = 1000;

void setup() {
  // put your setup code here, to run once:

  // set the red led pin as an output signal
  pinMode(red_led_pin, OUTPUT);

  // set the green led pin as an output signal
  pinMode(green_led_pin, OUTPUT);

  // set the blue led pin as an output signal
  pinMode(blue_led_pin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  // wait for 1 second
  delay(long_delay);

  // blink red led 5 times fast
  for (int i = 0; i < 5; i++) {
    // turn red led on
    digitalWrite(red_led_pin, HIGH);

    // wait for 0.25 seconds
    delay(fast);

    // turn red led off
    digitalWrite(red_led_pin, LOW);

    // wait for 0.25 seconds
    delay(fast);
  }

  // blink green led 10 times slow
  for (int i = 0; i < 10; i++) {
    // turn green led on
    digitalWrite(green_led_pin, HIGH);

    // wait for 0.5 seconds
    delay(slow);

    // turn green led off
    digitalWrite(green_led_pin, LOW);

    // wait for 0.5 seconds
    delay(slow);
  }

  // blink blue led 15 times real slow
  for (int i = 0; i < 15; i++) {
    // turn blue led on
    digitalWrite(blue_led_pin, HIGH);

    // wait for 0.75 seconds
    delay(real_slow);

    // turn blue led off
    digitalWrite(blue_led_pin, LOW);

    // wait for 0.75 seconds
    delay(real_slow);
  }

  // wait for 1 second
  delay(long_delay);
}
