// initialize variables
int number;

int buzzer_pin_number = 12;

int time = 2000;

int potentiometer_pin_number = A0;
int potentiometer_value;

//String message = "Please input a number";

void setup() {
  // put your setup code here, to run once:

  // set buzzer pin as an output signal
  pinMode(buzzer_pin_number, OUTPUT);

  // set potentiometer pin as an input signal
  pinMode(potentiometer_pin_number, INPUT);

  // create serial monitor
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  /*
  // print input message
  Serial.println(message);

  // go into infinite loop until user makes an input
  while (Serial.available() == 0) {

  }

  // store user input
  number = Serial.parseInt();

  // if the user's number is greater than 10 turn on the buzzer
  if (number > 10) {
    digitalWrite(buzzer_pin_number, HIGH);
    delay(time);
    digitalWrite(buzzer_pin_number, LOW);
  }
  */

  // get value from potentiometer
  potentiometer_value = analogRead(potentiometer_pin_number);

  // if the potentiometer value is greater than 1000 turn on the buzzer
  while (potentiometer_value > 1000) {
    digitalWrite(buzzer_pin_number, HIGH);

    // get value from potentiometer
  potentiometer_value = analogRead(potentiometer_pin_number);
  }

  digitalWrite(buzzer_pin_number, LOW);
}
