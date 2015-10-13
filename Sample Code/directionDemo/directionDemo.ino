const byte motorPins[6] = { 23, 14, 15, 22, 16, 17 };

void setup() {
  for (int i=0 ; i<6 ; i++) {
    pinMode(motorPins[i], OUTPUT);
  }
  delay(10000);
}

void loop() {
  forward(2);
  left(2);
  right(2);
  backward(2);
  delay(10000);
}

void forward(int t) {
  int time = t*1000;
  // left
  digitalWrite(motorPins[0], HIGH);
  digitalWrite(motorPins[2], LOW);
  analogWrite(motorPins[1], 255);
  // right
  digitalWrite(motorPins[3], HIGH);
  digitalWrite(motorPins[5], LOW);
  analogWrite(motorPins[4], 255);
  delay(time);
  analogWrite(motorPins[1], 0);
  analogWrite(motorPins[4], 0);
}

void backward(int t) {
  int time = t*1000;
  
}

void right(int t) {
  int time = t*1000;
  
}

void left(int t) {
  int time = t*1000;

}
