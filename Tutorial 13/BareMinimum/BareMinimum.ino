// initialize variables
int read_pin_number = A0;
int red_pin_number = 11;
int yellow_pin_number = 12;
int green_pin_number = 13;
float voltage = 0;
int time = 1000;
int read_value;

void setup() {
  // put your setup code here, to run once:

  // set analog pin as an input signal
  pinMode(read_pin_number, INPUT);

  // set LED pins as an output signal
  for (int i = 11; i < 14; i++) {
    pinMode(i, OUTPUT);
  }

  // create serial monitor
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  // read the value from analog pin
  read_value = analogRead(read_pin_number);

  // calculate the voltage
  voltage = (5. / 1023.) * read_value;

  // print the voltage
  Serial.print("The Potentiometer Voltage is: ");
  Serial.println(voltage);

  // print new lines
  Serial.println("\n\n");

  // want to make sure that the voltage isnt too high or give user a warning

  // if voltage is less than 3 volts, then turn green LED on
  // else if voltage is between 3 volts and 4 volts, then turn yellow LED on
  // else if voltage is greater than 4 volts, then turn red LED on
  if (voltage < 3.0) {
    digitalWrite(red_pin_number, LOW);
    digitalWrite(yellow_pin_number, LOW);
    digitalWrite(green_pin_number, HIGH);
  }
  else if (voltage >= 3.0 && voltage <= 4.0) {
    digitalWrite(red_pin_number, LOW);
    digitalWrite(yellow_pin_number, HIGH);
    digitalWrite(green_pin_number, LOW);
  }
  else if (voltage > 4.0) {
    digitalWrite(red_pin_number, HIGH);
    digitalWrite(yellow_pin_number, LOW);
    digitalWrite(green_pin_number, LOW);
  }

  // wait for 1 second
  //delay(time);
}
