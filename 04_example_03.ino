#define PIN_LED 13
unsigned int count, toggle;

void setup() {
  pinMode(PIN_LED,OUTPUT);
  Serial.begin(115200);
  while(!Serial);{
  }
  Serial.println("hello world!");
  count = toggle =0;
  digitalWrite(PIN_LED,toggle);
  // put your setup code here, to run once:

}

void loop() {
  toggle=toggle+1;
  digitalWrite(PIN_LED,toggle);
  delay(1000);
  toggle=toggle-1;
  digitalWrite(PIN_LED,toggle);
  delay(1000);
  
  
  // put your main code here, to run repeatedly:

}
  int toggle_state(int toggle){
    
    return toggle;
    
  }

