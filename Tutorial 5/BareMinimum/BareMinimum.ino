// initialize variables
int pin_number = 13;
int number_of_bits = 5;
int number = pow(2, number_of_bits);
 
// this function changes a decimal number to binary and returns it as an array
int* decimal_to_binary(int number) {
  // create an array that is the size of the number of bits
  ///int array[number_of_bits] = {0};
  int* array = new int[number_of_bits]{0};
  
  // store the binary number of the current index bit
  for (int i = 0; number > 0; i++) {
    // store the binary at current element
    array[i] = number % 2;

    // divide number by 2 to get the next binary bit number
    number = number / 2;
  }

  // return the binary array
  return array;
}

// this function will print the binary number using LEDs
void blink_LED(int binary_number[]) {
  /*
  // print the current decimal number in binary
  for (int j = number_of_bits - 1; j > -1; j--){
    Serial.print(binary_number[j]);
  }
  */

  // pin number variable (start at 13 so we can turn on LEDs from right to left)
  int pin_num = 13;

  // turn LED on based on current decimal number
  for (int k = 0; k < number_of_bits; k++) {
    // if binary number is HIGH, then turn the LED at pin number on
    if (binary_number[k] == 1) {
      digitalWrite(pin_num, HIGH);
    }

    // if binary number is LOW, then turn the LED at pin number off
    else if (binary_number[k] == 0) {
      digitalWrite(pin_num, LOW);
    }

    // go to the next pin number
    pin_num--;
  }
}

void setup() {
  // put your setup code here, to run once:

  // for printing in Serial Monitor
  //Serial.begin(9600);

  // set the pins based on the number of bits as an output signal
  for (int i = pin_number; i > (pin_number - number_of_bits); i--) {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:

  // wait for 1 second when program starts running
  delay(1000);

  // count up to the number starting at 0 all the way up to number - 1
  for (int i = 0; i < number; i++) {
    // create an integer array that stores the current decimal number in binary
    int* binary_number = decimal_to_binary(i);

    // print the binary number using LEDs
    blink_LED(binary_number);

    // print a new line
    //Serial.println("\n");

    // wait for 1 second
    delay(1000);

    // if the next number is equal to 2^(number_of_bits) then turn off all LEDs
    if (i + 1 == number) {
      for (int i = pin_number; i > (pin_number - number_of_bits); i--) {
        digitalWrite(i, LOW);
      }
    }
  }

  /*
  // print new lines when program is done
  Serial.println("\n");
  Serial.println("\n");
  Serial.println("\n");
  */
}
