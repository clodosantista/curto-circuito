#define qtd_led 5
#define butao 15
#define ledv 2

int pinosleds[qtd_led] = {0,16,5,19,21};

void setup() {
  for (int i = 0; i < qtd_led; i++){
    pinMode(oinosleds)[i], OUTPUT);
    }
    pinMode(ledv, OUTPUT);
    pinMode(butao, INPUT_PULLUP);
    }

    void loop() {
      while (digitalRead(butao) == LOW){
        digitalWrite(ledv, HIGH);
        }
        for (int i = 0; i < qtd_led; i++){
          digitalWrite(pinosleds[i], HIGH);
          delay(500);

