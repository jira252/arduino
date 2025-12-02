int bt = 15;
int WIFI = 2;
int NTP = 17;
int IOT = 12;
void setup() {
  pinMode(bt, OUTPUT);
  pinMode(WIFI, OUTPUT);
  pinMode(NTP, OUTPUT);
  pinMode(IOT, OUTPUT);
}

void loop() {
  digitalWrite(bt, LOW);
  delay(1000);
  digitalWrite(bt, HIGH);
  delay(1000);
  digitalWrite(WIFI, LOW);
  delay(900);
  digitalWrite(WIFI, HIGH);
  delay(700);
  digitalWrite(NTP, LOW);
  delay(600);
  digitalWrite(NTP, HIGH);
  delay(400);
  digitalWrite(IOT, LOW);
  delay(400);
  digitalWrite(IOT, HIGH);
  delay(200);
}
