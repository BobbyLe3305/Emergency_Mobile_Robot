int m1=8;
int m2=9;
int m3=10;
int m4=11;


void setup() {
  pinMode(m1, OUTPUT);
  pinMode(m2, OUTPUT);
  pinMode(m3, OUTPUT);
  pinMode(m4, OUTPUT);
}

void loop() {
  digitalWrite(m4,HIGH);
  digitalWrite(m3,LOW);

}
