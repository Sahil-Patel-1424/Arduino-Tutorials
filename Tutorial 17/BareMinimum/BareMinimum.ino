// initialize variables
int red_pin_number = 13;
int potentiometer_pin_number = A0;
int potentiometer_value;
int voltage;
int time = 500;

void setup() {
  // put your setup code here, to run once:

  // set LED pin as an output signal
  pinMode(red_pin_number, OUTPUT);

  // set potentiometer pin as an input signal
  pinMode(potentiometer_pin_number, INPUT);

  // create serial monitor
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  // read in the value from the potentiometer
  potentiometer_value = analogRead(potentiometer_pin_number);

  // print the value
  Serial.print("The Potentiometer Value is: ");
  Serial.println(potentiometer_value);

  // wait for 0.5 seconds
  delay(time);

  // if the potentiometer value is greater than 1000 then turn on the red LED
  while (potentiometer_value > 1000) {
    digitalWrite(red_pin_number, HIGH);

    // read in the value from the potentiometer
    potentiometer_value = analogRead(potentiometer_pin_number);

    // print the value
    Serial.print("The Potentiometer Value is: ");
    Serial.println(potentiometer_value);

    // wait for 0.5 seconds
    delay(time);
  }

  // turn off the red LED when we leave the while loop
  digitalWrite(red_pin_number, LOW);
}
