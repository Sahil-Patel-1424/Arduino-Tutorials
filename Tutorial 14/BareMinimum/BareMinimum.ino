// initialize variables
int read_pin_number = A0;
int green_pin_number = 13;
float voltage = 0;
int time = 1000;
int read_value;
float led_value;

void setup() {
  // put your setup code here, to run once:

  // set analog pin as an input signal
  pinMode(read_pin_number, INPUT);

  // set green LED pin as an output signal
  pinMode(green_pin_number, OUTPUT);

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

  // calculate LED value based on the read value from analog pin
  led_value = (255. / 1023.) * read_value;

  // light up green LED based on LED value
  analogWrite(green_pin_number, led_value);

  // wait for 1 second
  //delay(time);
}
