#define PIN7 7

void setup() {
  pinMode(PIN7,OUTPUT);
  
  // put your setup code here, to run once:

}

void loop() {
  digitalWrite(PIN7,LOW);
  delay(1000);
  int i =0;
  while(i<5){
  digitalWrite(PIN7,HIGH);
  delay(200);
  digitalWrite(PIN7,LOW);
  delay(200);
  i=i+1;}
  while(1){
    digitalWrite(PIN7,HIGH);
    
  }

  // put your main code here, to run repeatedly:

}
