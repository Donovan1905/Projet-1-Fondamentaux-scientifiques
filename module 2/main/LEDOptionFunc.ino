//Jonah

#include "LEDOptionFunc.h"

float previousTime = 0;

void BPMall(float heartRateDisp, int pulseLength){ // flash all LEDs at speed BPM for pulseLength amount of time

    float currentTime = millis();
    if(currentTime - previousTime > heartRateDisp){
        previousTime = currentTime;
        for(int i = 2; i <= 12; i++){ //turn all LEDs on
            digitalWrite(i, HIGH);
        }
    }
    if(currentTime - previousTime > pulseLength){
        previousTime = currentTime;
        for (int i = 2; i <= 12 ; i++) {
            digitalWrite(i, LOW);
        }
    }
}

void BPMoutOfX(int heartRateDisp, int pulseLength, int option2){ // Flash user choice fraction of LEDs at speed BPM for pulseLength amount of time
    float currentTime = millis();
    if(currentTime - previousTime > heartRateDisp){
        previousTime = currentTime;
        for(int i = 2; i <= 12; i = i + option2){
            digitalWrite(i, HIGH);
        }
    }
    if(currentTime - previousTime > pulseLength){
        previousTime = currentTime;
        for (int i = 2; i <= 12 ; i = i + option2) {
            digitalWrite(i, LOW);
        }
    }
}

void BPMchoice(int heartRateDisp, int pulseLength, int option2){ // Flash user choice single LED at speed BPM for pulseLength amount of time
    float currentTime = millis();
    option2 = option2 + 1
    if(currentTime - previousTime > heartRateDisp){
        previousTime = currentTime;
        digitalWrite(option2, HIGH);
    }
    if(currentTime - previousTime > pulseLength){
        previousTime = currentTime;
        digitalWrite(option2, LOW);
    }
}
