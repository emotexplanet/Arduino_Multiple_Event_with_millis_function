
int LED1 = 8;
int LED2 = 9;
int LED3 = 10;
int LED4 = 11;

unsigned long wait1 = 1000;
unsigned long wait2 = 500;
unsigned long wait3 = 250;
unsigned long wait4 = 100;

unsigned long previousTime1 = 0;
unsigned long previousTime2 = 0;
unsigned long previousTime3 = 0;
unsigned long previousTime4 = 0;

short state1 = 0;
short state2 = 0;
short state3 = 0;
short state4 = 0;

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
}

void loop() {
    if((millis() - previousTime1) >= wait1){
      if(state1 == 1){
        state1 = 0;
      }
      else{
        state1 = 1;
      }
      previousTime1 = millis();
    }

    if((millis() - previousTime2) >= wait2){
      if(state2 == 1){
        state2 = 0;
      }
      else{
        state2 = 1;
      }
      previousTime2 = millis();
    }

    if((millis() - previousTime3) >= wait3){
      if(state3 == 1){
        state3 = 0;
      }
      else{
        state3 = 1;
      }
      previousTime3 = millis();
    }

    if((millis() - previousTime4) >= wait4){
      if(state4 == 1){
        state4 = 0;
      }
      else{
        state4 = 1;
      }
      previousTime4 = millis();
    }

    digitalWrite(LED1, state1);
    digitalWrite(LED2, state2);
    digitalWrite(LED3, state3);
    digitalWrite(LED4, state4);
}
