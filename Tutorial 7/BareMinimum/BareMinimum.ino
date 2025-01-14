// initialize variables
int red_pin_num = 7;
int dim = 25;
int intermediate = 125;
int bright = 255;
int off = 0;
int time = 5000;
int time_1 = 1000;
int time_2 = 4000;

void setup() {
  // put your setup code here, to run once:

  // set analog pin as an output signal
  pinMode(red_pin_num, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  // value: 0 (0 V) - 255 (5 V)

  // wait for 1 second
  delay(time_1);

  // turn red LED on at lowest brightness
  analogWrite(red_pin_num, dim);

  // wait for 5 seconds
  delay(time);

  //analogWrite(red_pin_num, off);
  //delay(time_1);
  
  // change red LED brightness to medium brightness
  analogWrite(red_pin_num, intermediate);

  // wait for 5 seconds
  delay(time);

  //analogWrite(red_pin_num, off);
  //delay(time_1);

  // change red LED brightness to highest brightness
  analogWrite(red_pin_num, bright);

  // wait for 4 seconds
  delay(time_2);

  //analogWrite(red_pin_num, off);
  //delay(time_1);
}
