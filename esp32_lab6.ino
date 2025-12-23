int ldr = 36;
int bt = 15;
int wifi = 2;
int ntp = 17;
int iot = 12;
void setup() {
  Serial.begin(9600);
  pinMode(bt, OUTPUT);
  pinMode(wifi, OUTPUT);
  pinMode(ntp, OUTPUT);
  pinMode(iot, OUTPUT);
}

void loop() {
  int x = analogRead(ldr);
  Serial.print(x);
  Serial.print("\t");
  int y = map(x , 400 , 950 , 0 , 4);
  Serial.println(y);
  
  if(y==0){
    digitalWrite(bt, HIGH);
    digitalWrite(wifi, HIGH);
    digitalWrite(ntp, HIGH);
    digitalWrite(iot, HIGH);
  }else if(y == 1){
    digitalWrite(bt, LOW);
    digitalWrite(wifi, HIGH);
    digitalWrite(ntp, HIGH);
    digitalWrite(iot, HIGH);
  }else if(y == 2){
    digitalWrite(bt, LOW);
    digitalWrite(wifi, LOW);
    digitalWrite(ntp, HIGH);
    digitalWrite(iot, HIGH);
  }else if(y == 3){
    digitalWrite(bt, LOW);
    digitalWrite(wifi, LOW);
    digitalWrite(ntp, LOW);
    digitalWrite(iot, HIGH);
  }else if(y == 3){
    digitalWrite(bt, LOW);
    digitalWrite(wifi, LOW);
    digitalWrite(ntp, LOW);
    digitalWrite(iot, HIGH);
  }else if(y == 4){
    digitalWrite(bt, LOW);
    digitalWrite(wifi, LOW);
    digitalWrite(ntp, LOW);
    digitalWrite(iot, LOW);
  }



  delay(500);

}
