int l1 = 5;
int r1 = 6;
int l2 = 3;
int r2 = 4;
int o1 = 8, o2 = 10;
int v1 = 9, v2 = 12;
int a, b;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(l1, OUTPUT);
  pinMode(r1, OUTPUT);
  pinMode(l2, OUTPUT);
  pinMode(r2, OUTPUT);
  pinMode(o1, INPUT);
  pinMode(o2, INPUT);
  pinMode(v1, OUTPUT);
  pinMode(v2, OUTPUT);
  digitalWrite(v1, HIGH);
  digitalWrite(v2, HIGH);
}
void movement(int l, int r) {
  if (l == 1 && r == 0 ) {
  
     digitalWrite(l1, HIGH);
    digitalWrite(r1, HIGH);
    digitalWrite(l2, LOW);
    digitalWrite(r2, LOW);


    Serial.println("right");
    delay(100);
    digitalWrite(l1, LOW);
    digitalWrite(l2, LOW);
    digitalWrite(r1, LOW);
    digitalWrite(r2, LOW);
    delay(300);
  }
  if (l == 0 && r == 0) {
  
      digitalWrite(l1, HIGH);
    digitalWrite(r1, LOW);
    digitalWrite(l2, LOW);
    digitalWrite(r2, HIGH);


    Serial.println("forward");
    delay(100);
    digitalWrite(l1, LOW);
    digitalWrite(l2, LOW);
    digitalWrite(r1, LOW);
    digitalWrite(r2, LOW);
    delay(300);
  }
  if (l == 0 && r == 1) {

      digitalWrite(l1, LOW);
    digitalWrite(r1, LOW);
    digitalWrite(l2, HIGH);
    digitalWrite(r2, HIGH);

    Serial.println("left");
    delay(100);
    digitalWrite(l1, LOW);
    digitalWrite(l2, LOW);
    digitalWrite(r1, LOW);
    digitalWrite(r2, LOW);
    delay(300);
  }
  if (l == 1 && r == 1) {
    digitalWrite(l1, LOW);
    digitalWrite(l2, LOW);
    digitalWrite(r1, LOW);
    digitalWrite(r2, LOW);
    Serial.println("backward");
    delay(500);
  }

}
void loop() {
  a = digitalRead(o1);
  b = digitalRead(o2);

  movement(a, b);

}
