#define RELAY 1
#define USER_SW 3
#define LED_PIN 4

void setup() {
  pinMode(USER_SW, INPUT);
  pinMode(RELAY, OUTPUT);
  pinMode(LED_PIN, OUTPUT);

  // init
  digitalWrite(RELAY, 0);

  // initial, Turn off the relay for 3 seconds
  while(millis() < 5000){
    digitalWrite(LED_PIN, 0);
    delay(100);
    digitalWrite(LED_PIN, 1);
    delay(100);
  }
}

void loop() {

  // RELAY be off when USER_SW is pusshing
  if(digitalRead(USER_SW) == 1){
    digitalWrite(RELAY, 1);
  } else {
    digitalWrite(RELAY, 0);
  }

}
