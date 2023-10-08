int us_pin =7;
int us_echo =6;
long time =0;
long distance = 0;

void setup() {
  Serial.begin(9600);
  pinMode(us_pin, OUTPUT);
  pinMode(us_echo, INPUT);
}

void loop() {
  digitalWrite(us_pin, LOW);
  delay(5);
  digitalWrite(us_pin, HIGH);
  delay(10);
  digitalWrite(us_pin, LOW);
  time = pulseIn(us_echo, HIGH);
  distance = (time/2) * 0.03432;
  Serial.print(distance);
  Serial.println(" cm");
  delay(1000);
}
