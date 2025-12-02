int bt = 17;
 int WIFI = 2;
 int NTP = 15;
 int IOT = 12;
void setup() {
   Serial.begin(115200);
   pinMode(bt, OUTPUT);
   pinMode(WIFI, OUTPUT);
   pinMode(NTP, OUTPUT);
   pinMode(IOT, OUTPUT);

}

void loop() {
   digitalWrite(bt, HIGH);
   delay(1000);
   digitalWrite(bt, LOW);
   delay(1000);
   digitalWrite(WIFI, HIGH);
   delay(1000);
   digitalWrite(WIFI, LOW);
   delay(1000);
   digitalWrite(NTP, HIGH);
   delay(1000);
   digitalWrite(NTP, LOW);
   delay(1000);
   digitalWrite(IOT, HIGH);
   delay(1000);
   digitalWrite(IOT, LOW);
   delay(1000);
}
