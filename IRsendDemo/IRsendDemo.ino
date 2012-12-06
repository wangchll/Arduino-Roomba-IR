/*
 * IRremote: IRsendDemo - demonstrates sending IR codes with IRsend
 * An IR LED must be connected to Arduino PWM pin 3.
 * Version 0.1 July, 2009
 * Copyright 2009 Ken Shirriff
 * http://arcfn.com
 */

#include <IRremote.h>

IRsend irsend;

unsigned int dock[] = {2650,1100,750,2900,750,2900,750,2900,750,2900,2650,1100,750,2900,2650};
//unsigned int dock[] = {2650,1100,750,2900,750,2900,800,2900,750,2900,2650,1100,750,2900,2650};
//unsigned int clean[] = {2650,1100,750,2900,750,2950,700,2950,2700,1100,700,2950,750,2900,750};

void setup()
{
  Serial.begin(9600);
}

void loop() {
  if (Serial.read() != -1) {
    for (int i = 0; i < 3; i++) {
      //irsend.sendSony(0xa90, 12); // Sony TV power code
      irsend.sendRaw(dock, 15, 38);
      Serial.println("Roomba GO~~~~~~~~~~~~~~~~~");
      delay(40);
    }
  }
}
