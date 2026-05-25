/*
  Microcontroller double clap detctor
  
  Made by ofrico

  26/5/2026

  Connect DO of your sound sensor to pin 2 of your microcontroller,
  connect a LED using a 220 ohm resistor to pin 3.

  Make shure to calibrate your sound sensor.
*/

bool IsDoubleClap = LOW;

void setup(){
  pinMode(2, INPUT);
  pinMode(3, OUTPUT);
}

void loop() {
  if(digitalRead(2)==1){
    delay(100);
    unsigned long startTime = millis();
    while(digitalRead(2)==0){}
    unsigned long Time = millis() - startTime;
    if(Time<400){ 
      IsDoubleClap=HIGH;
    }
  }
  digitalWrite(3, IsDoubleClap);
  delay(1000);
  IsDoubleClap = LOW;
  digitalWrite(3, LOW);
}
