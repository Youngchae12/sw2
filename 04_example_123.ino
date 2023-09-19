###04_example_1
#define PIN_LED 13

void setup() {
  pinMode(PIN_LED, OUTPUT);
}

void loop() {
    digitalWrite(PIN_LED, 1);
    //digitalWrite(PIN_LED, 1);
}


###04_example_2
void setup() {
  //Initialize serial and wait for port to open:
  Serial.begin(115200);
  while (!Serial){
    ; // wait for serial port to connect. Needed for native USB
  }
}

void loop() {
  Serial.println("Hello World!");
  delay(1000);
}


###04_example_3
#define PIN_LED 13
unsigned int count, toggle;

void setup() {
  pinMode(PIN_LED, OUTPUT);
  Serial.begin(115200); // Initialize serial port
  while (!Serial) {
    ; // wait for serial port to connect.
  }
  Serial.println("Hello World!");
  count = toggle = 0;
  digitalWrite(PIN_LED, toggle); // turn off LED.
}

void loop() {
  Serial.println(++count);
  toggle = toggle_state(toggle); //toggle LED value.
  digitalWrite(PIN_LED, toggle); //update LED status.
  delay(1000); // wait for 1,000 milliseconds
}

int toggle_state(int toggle) {
  return !toggle;
}

