int RPIN = 6;  // what PIN are you using for RED?
int BPIN = 7; // what PIN are you using for BLUE?
int GPIN = 8; // what PIN are you using for GREEN?

void setup() {
  // put your setup code here, to run once:
  // put your setup code here, to run once:
  pinMode(RPIN, OUTPUT);
  pinMode(BPIN, OUTPUT);
  pinMode(GPIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  // Digital ON / OFF (cycles)
  digitalWrite(GPIN, LOW);
  digitalWrite(RPIN, HIGH);
  delay(150);
  digitalWrite(RPIN, LOW);
  digitalWrite(BPIN, HIGH);
  delay(150);
  digitalWrite(BPIN, LOW);
  digitalWrite(GPIN, HIGH);
  delay(150);

  // Fade in Red
  for(int i=0; i< 255; i++) {
    analogWrite(RPIN,i);
    analogWrite(255-GPIN,i);
    delay(2);
  }
  // Fade in Blue
  for(int i=0; i< 255; i++) {
    analogWrite(BPIN,i);
    analogWrite(255-RPIN,i);
    delay(2);
  }
  // Fade in Green
  for(int i=0; i< 255; i++) {
    analogWrite(GPIN,i);
    analogWrite(255-BPIN,i);
    delay(2);
  }
}
