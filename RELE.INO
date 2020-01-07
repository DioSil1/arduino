int rele = 2;
int serialValor = 0;

void setup() {
  pinMode(rele, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0 ) {
    serialValor = Serial.read();
    if (serialValor == 97) {
      digitalWrite(rele, !digitalRead(rele));
    }
  }
}
