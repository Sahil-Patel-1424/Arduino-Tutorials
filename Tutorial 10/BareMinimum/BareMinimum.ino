// initialize variables
int read_pin_number = A0;
float voltage = 0;
int time = 1000;
int read_value;

void setup() {
  // put your setup code here, to run once:

  // set analog pin as an input signal
  pinMode(read_pin_number, INPUT);

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
  Serial.println(voltage);

  // print new lines
  Serial.println("\n\n");

  // wait for 1 second
  delay(time);
}
