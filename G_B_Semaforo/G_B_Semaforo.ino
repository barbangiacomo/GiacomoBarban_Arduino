
int lampeggi = 0;
int tlamp = 0;
int tverde = 0;
int tgiallo = 0;
int verde1 = 12;
int giallo1 = 13;
int rosso1 = 10;
int verde2 = 5;
int giallo2 = 4;
int rosso2 = 2;
void setup() {
  // put your setup cod here, to run once;
pinMode(verde1,OUTPUT); //verde1
pinMode(giallo1,OUTPUT); //giallo1
pinMode(rosso1,OUTPUT); //rosso1
pinMode(verde2,OUTPUT); //verde2
pinMode(giallo2,OUTPUT); //giallo2
pinMode(rosso2,OUTPUT); //rosso2
numLampeggi();
TempoLampeggio();
TempoVerde();
TempoGiallo();

}

void loop() {
  // put your main code here, to run repeatedly;
  digitalWrite(verde1,HIGH);
  digitalWrite(rosso2,HIGH);
  delay(tverde);
  lampeggia(verde1, tlamp, lampeggi);
  digitalWrite(verde1,LOW);
  digitalWrite(giallo1,HIGH);
  digitalWrite(giallo2,HIGH); 
  delay(tgiallo);
  digitalWrite(giallo1,LOW);
  digitalWrite(rosso2,LOW);
  digitalWrite(giallo2,LOW);
  digitalWrite(rosso1,HIGH);
  digitalWrite(verde2,HIGH);
  delay(tverde);
  lampeggia(verde2, tlamp, lampeggi);
  digitalWrite(verde2,LOW);
  digitalWrite(giallo2,HIGH);
  digitalWrite(giallo1,HIGH);
  delay(tgiallo);
  digitalWrite(giallo1,LOW);
  digitalWrite(giallo2,LOW);
  digitalWrite(rosso1,LOW);
  
}
void lampeggia(int led, int rit, int c)
{
  for (int i = 0; i<=c; i++){
    delay (rit);
    digitalWrite(led,LOW);
    delay(rit);
    digitalWrite(led,HIGH);
  }
}

void numLampeggi()
{
  Serial.begin(9600);
  Serial.println("Quanti lampeggi verdi vuoi?");
  while(Serial.available()==0){};
  lampeggi = Serial.readString().toInt();
}

void TempoLampeggio()
{
  Serial.begin(9600);
  Serial.println("Quanto durano i lampeggi verdi?");
  while(Serial.available()==0){};
  tlamp = Serial.readString().toInt();
}
void TempoVerde()
{
  Serial.begin(9600);
  Serial.println("Quanto dura il verde?");
  while(Serial.available()==0){};
  tverde = Serial.readString().toInt();
}
void TempoGiallo()
{
  Serial.begin(9600);
  Serial.println("Quanto dura il giallo?");
  while(Serial.available()==0){};
  tgiallo = Serial.readString().toInt();
}


