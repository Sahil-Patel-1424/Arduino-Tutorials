// initialize variables
int red_led_pin = 8;
int dit = 250;
int dah = 500;
int long_delay = 2000;

void setup() {
  // put your setup code here, to run once:

  // set the red led pin as an output signal
  pinMode(red_led_pin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  // SOS in morse code

  // S
  digitalWrite(red_led_pin, HIGH);
  delay(dit);
  digitalWrite(red_led_pin, LOW);
  delay(dit);

  digitalWrite(red_led_pin, HIGH);
  delay(dit);
  digitalWrite(red_led_pin, LOW);
  delay(dit);

  digitalWrite(red_led_pin, HIGH);
  delay(dit);
  digitalWrite(red_led_pin, LOW);
  delay(dit);

  // O
  digitalWrite(red_led_pin, HIGH);
  delay(dah);
  digitalWrite(red_led_pin, LOW);
  delay(dah);
  
  digitalWrite(red_led_pin, HIGH);
  delay(dah);
  digitalWrite(red_led_pin, LOW);
  delay(dah);

  digitalWrite(red_led_pin, HIGH);
  delay(dah);
  digitalWrite(red_led_pin, LOW);
  delay(dah);

  // S
  digitalWrite(red_led_pin, HIGH);
  delay(dit);
  digitalWrite(red_led_pin, LOW);
  delay(dit);

  digitalWrite(red_led_pin, HIGH);
  delay(dit);
  digitalWrite(red_led_pin, LOW);
  delay(dit);

  digitalWrite(red_led_pin, HIGH);
  delay(dit);
  digitalWrite(red_led_pin, LOW);
  delay(dit);

  delay(long_delay);
}
