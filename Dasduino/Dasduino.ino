int LED1 = 5;
int LED2 = 4;
int LED3 = 3;
int LED4 = 2;
int sensorPin = A0;
int sensorValue = 0;
 
// the setup function runs once when you press reset or power the board
void setup() {
  Serial.begin(9600);
   
  // initialize digital pin LED as an output.
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
   
  pinMode(sensorPin, INPUT);
}
 
// the loop function runs over and over again forever
void loop() {
   
  // read the value from the sensor:
  sensorValue = analogRead(sensorPin);
  Serial.println(sensorValue);
   
  if  (sensorValue <= 100) {
    digitalWrite(LED1, HIGH);  // turn the LED on (HIGH is the voltage level)
    digitalWrite(LED2, LOW);   // turn the LED off
    digitalWrite(LED3, LOW);   //
    digitalWrite(LED4, LOW);
  } else if (sensorValue > 100 && sensorValue <= 200) {
    digitalWrite(LED1, LOW);   //
    digitalWrite(LED2, HIGH);  //
    digitalWrite(LED3, LOW);   //
    digitalWrite(LED4, LOW);
  } else if (sensorValue > 200 && sensorValue <= 300) {
    digitalWrite(LED1, LOW);   //
    digitalWrite(LED2, LOW);   //
    digitalWrite(LED3, HIGH);   //
    digitalWrite(LED4, LOW);
  } else if (sensorValue > 300 && sensorValue <= 400) {
    digitalWrite(LED1, LOW);   //
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, LOW);   //
    digitalWrite(LED4, HIGH);
  } else if (sensorValue > 400 && sensorValue <= 500) {
    digitalWrite(LED1, HIGH);  //
    digitalWrite(LED2, HIGH);  //
    digitalWrite(LED3, LOW);   //
    digitalWrite(LED4, LOW);
  } else if (sensorValue > 500 && sensorValue <= 600) {
    digitalWrite(LED1, LOW);   //
    digitalWrite(LED2, LOW);   //
    digitalWrite(LED3, HIGH);  //
    digitalWrite(LED4, HIGH);
  } else if (sensorValue > 600 && sensorValue <= 700) {
    digitalWrite(LED1, HIGH);  //
    digitalWrite(LED2, LOW);   //
    digitalWrite(LED3, HIGH);  //
  } else
  {
    // if nothing else matches, do this
    digitalWrite(LED1, LOW);    // turn the LED off by making the voltage LOW
    digitalWrite(LED2, LOW);    //
    digitalWrite(LED3, LOW);    //
    digitalWrite(LED4, LOW);
  }
}
