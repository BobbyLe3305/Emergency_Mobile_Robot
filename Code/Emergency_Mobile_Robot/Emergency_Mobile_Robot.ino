int m11=8;
int m12=9;
int m13=10;
int m14=11;

int m21=4;
int m22=5;
int m23=6;
int m24=7;

void setup() {
  pinMode(m11,OUTPUT);
  pinMode(m12,OUTPUT);
  pinMode(m13,OUTPUT);
  pinMode(m14,OUTPUT);

  pinMode(m21,OUTPUT);
  pinMode(m22,OUTPUT);
  pinMode(m23,OUTPUT);
  pinMode(m24,OUTPUT);

  Serial.begin(9600);
}

void loop() {
  digitalWrite(m11,1);
  digitalWrite(m13,1);
  digitalWrite(m21,1);
  digitalWrite(m23,1);
  delay(1000);

  
}
