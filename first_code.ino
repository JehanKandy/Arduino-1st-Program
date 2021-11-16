void setup() {
  pinMode(3,OUTPUT); //LED

  // this is a comment
  // don't use 0 and 1 pins
  // pinMode ===> indentify pins
  // OUTPUT means for output items
}

void loop() {
  digitalWrite(3,HIGH);
  delay(1000);
  digitalWrite(3,LOW);
  delay(1000);

  //digitalWrite ===> indentify pins
  // HIGH ===> on LED
  // LOW ===> off LED
  //delay(1000) delay 1s = 1000ms
}
