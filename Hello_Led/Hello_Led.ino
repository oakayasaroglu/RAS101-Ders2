
#define led_Pin 4



void setup() {
  pinMode(led_Pin,OUTPUT);

}

void loop() {
  

  digitalWrite(led_Pin,HIGH);

  delay(45);

  digitalWrite(led_Pin,LOW);

  delay(45);  

}
