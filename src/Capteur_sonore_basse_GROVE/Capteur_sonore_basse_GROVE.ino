/*
    ** Mesure intensité son ambiant module Grove **
       PIN A0 Module shield GROVE
       Moniteur série -> Baud rate 9600.
*/

int iBru = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  iBru = analogRead(A0);
  Serial.print("Son ambiant : ");
  Serial.println(iBru);
  delay(200);
}
