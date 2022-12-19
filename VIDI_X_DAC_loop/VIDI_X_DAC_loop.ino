void setup() {}
void loop() {
  for (int i = 0; i < 256; i += 1) {
    dacWrite(26, i);
    delay(250);
  }
  dacWrite(26, 255);
  delay(3000);
}
