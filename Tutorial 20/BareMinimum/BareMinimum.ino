// initialize variables
int red_pin_number = 13;
int green_pin_number = 12;
int blue_pin_number = 11;

int time = 1000;

String color;
String message = "What color do you want?";

void setup() {
  // put your setup code here, to run once:

  // set LED pins as output signals
  for (int i = 11; i < 14; i++) {
    pinMode(i, OUTPUT);
  }

  // create serial monitor
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  // print input message
  Serial.println(message);

  // go into infinite loop until user makes an input
  while (Serial.available() == 0) {

  }

  // get user input
  color = Serial.readString();

  // user says red
  if (color == "red\n") {
    digitalWrite(red_pin_number, HIGH);
    digitalWrite(green_pin_number, LOW);
    digitalWrite(blue_pin_number, LOW);
  }

  // user says green
  else if (color == "green\n") {
    digitalWrite(red_pin_number, LOW);
    digitalWrite(green_pin_number, HIGH);
    digitalWrite(blue_pin_number, LOW);
  }

  // user says blue
  else if (color == "blue\n") {
    digitalWrite(red_pin_number, LOW);
    digitalWrite(green_pin_number, LOW);
    digitalWrite(blue_pin_number, HIGH);
  }

  // user says yellow
  else if (color == "yellow\n") {
    digitalWrite(red_pin_number, HIGH);
    digitalWrite(green_pin_number, HIGH);
    digitalWrite(blue_pin_number, LOW);
  }

  // user says purple
  else if (color == "purple\n") {
    digitalWrite(red_pin_number, HIGH);
    digitalWrite(green_pin_number, LOW);
    digitalWrite(blue_pin_number, HIGH);
  }
  
  // user says teal
  else if (color == "teal\n") {
    digitalWrite(red_pin_number, LOW);
    digitalWrite(green_pin_number, HIGH);
    digitalWrite(blue_pin_number, HIGH);
  }

  // user says white
  else if (color == "white\n") {
    digitalWrite(red_pin_number, HIGH);
    digitalWrite(green_pin_number, HIGH);
    digitalWrite(blue_pin_number, HIGH);
  }

  // user wants to turn off the LEDs
  else if (color == "off\n") {
    digitalWrite(red_pin_number, LOW);
    digitalWrite(green_pin_number, LOW);
    digitalWrite(blue_pin_number, LOW);
  }
}
