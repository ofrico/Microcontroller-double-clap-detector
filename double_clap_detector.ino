/*
  Microcontroller double clap detctor
  
  Made by ofrico

  26/5/2026

  Connect DO of your sound sensor to pin 2 of your microcontroller

  Make shure to calibrate your sound sensor
*/

bool IsDoubleClap = LOW;
unsigned long Time;

void setup(){
  pinMode(2, INPUT);
}

void loop() {
  if(digitalRead(2)==1){
    delay(100);
    Time = pulseIn(2, HIGH, 500000);
    if(Time<500000 && Time!=0){
      IsDoubleClap = HIGH;
      //Put here what you want to do when there is a double clap
    } 
  }
}
