//Jonah et Donovan

#include "LEDOptionFunc.h"
#include "Heart.h"
#include "param.h"

void setup(){
    for(int i = 2; i <= 12; i++){ //initialize the Heart LED outputs
        pinMode(i, OUTPUT);
    }
    Serial.begin(9600); // start the serial monitor
    pinMode(A0, INPUT); // initialize the input pin for the cardio module
}

void loop(){

    lightEmUp(option, option2, 90, 100); //run the pouls() function from cardio.c (which contains the function to make the heart module go

}
