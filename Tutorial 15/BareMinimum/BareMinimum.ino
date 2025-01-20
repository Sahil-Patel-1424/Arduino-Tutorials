// initialize variables
int red_pin_number = 13;
int yellow_pin_number = 12;
int time = 500;

void setup() {
  // put your setup code here, to run once:

  // set LED pins as output signals
  for (int i = 12; i < 14; i++) {
    pinMode(i, OUTPUT);
  }

  // create serial monitor
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  // blink the yellow LED 3 times
  for (int i = 0; i < 3; i++) {
    digitalWrite(yellow_pin_number, HIGH);
    delay(time);
    digitalWrite(yellow_pin_number, LOW);
    delay(time);
  }

  // blink the red LED 5 times
  for (int i = 0; i < 5; i++) {
    digitalWrite(red_pin_number, HIGH);
    delay(time);
    digitalWrite(red_pin_number, LOW);
    delay(time);
  }
}
