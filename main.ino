int results[];
int number_zero = 0;
int us_pin = 7;
int us_echo = 6;
long time = 0;
long distance = 0;

void setup() {
  Serial.begin(9600);
  pinMode(us_pin, OUTPUT);
  pinMode(us_echo, INPUT);
}

void scan_environment() {
  digitalWrite(us_pin, LOW);
  delay(5);
  digitalWrite(us_pin, HIGH);
  delay(10);
  digitalWrite(us_pin, LOW);
  time = pulseIn(us_echo, HIGH);
  distance = (time/2) * 0.03432;
  results[number_zero] = distance; // Adding the distance to the list
  Serial.print(distance);
  Serial.println(" cm");
}

void loop() {
  scan_enviroment();
  number_zero =+ 1;
  delay(1000);
}
