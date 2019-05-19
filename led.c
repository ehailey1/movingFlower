/*
 * File:   led.c
 * Author: Evan Hailey
 *
 * Created on May 15, 2019, 11:00 AM
 */


#include <xc.h>
//#include <stdint.h>

#include "led.h"
#include "mcc_generated_files/mcc.h"

uint16_t j = 0;

/* Set colors (RGB) using values between 0 - 255, using
 * MCC the PWM duty cycle is at ~12.5% */

void LED_setColor(uint8_t red, uint8_t green, uint8_t blue){
    PWM2_LoadDutyValue(red);
    PWM3_LoadDutyValue(green);
    PWM4_LoadDutyValue(blue);
}

void colorCycle(){
    LED_setColor(autocolors[j].red,autocolors[j].green,autocolors[j].blue);
    j++;
    if(j == 25){
        j = 0;
    }
}

/* Following function contains different colors, based upon
 different RGB color values between 0-255 */
void colorCycle_init(){
    
//Light Red
autocolors[0].red = 155;

//Red
autocolors[1].red = 255;

//Pale Red
autocolors[2].red = 255;
autocolors[2].white = 100;

//Pale Red
autocolors[3].red = 255;
autocolors[3].white = 150;

//Bubble gum Pink
autocolors[4].red = 255;
autocolors[4].green = 140;
autocolors[4].blue = 115;
autocolors[4].white = 255;

//Magenta
autocolors[5].red = 255;
autocolors[5].green = 140;
autocolors[5].blue = 215;
autocolors[5].white = 255;

//Pale Purple
autocolors[6].red = 95;
autocolors[6].green = 140;
autocolors[6].blue = 215;
autocolors[6].white = 255;

//Purple
autocolors[7].red = 35;
autocolors[7].green = 60;
autocolors[7].blue = 255;
autocolors[7].white = 255;

//Violet
autocolors[8].red = 10;
autocolors[8].green = 0;
autocolors[8].blue = 255;
autocolors[8].white = 255;

//Deep Blue
autocolors[9].red = 0;
autocolors[9].green = 0;
autocolors[9].blue = 255;
autocolors[9].white = 255;

//Light Blue
autocolors[10].red = 0;
autocolors[10].green = 100;
autocolors[10].blue = 255;
autocolors[10].white = 255;

//Baby Blue
autocolors[11].red = 0;
autocolors[11].green = 255;
autocolors[11].blue = 150;
autocolors[11].white = 255;

//Teal
autocolors[12].red = 0;
autocolors[12].green = 255;
autocolors[12].blue = 75;
autocolors[12].white = 255;

//Sea foam Green
autocolors[13].red = 0;
autocolors[13].green = 255;
autocolors[13].blue = 30;
autocolors[13].white = 255;

//Light Green
autocolors[14].red = 0;
autocolors[14].green = 255;
autocolors[14].blue = 0;
autocolors[14].white = 150;

//Green
autocolors[15].red = 0;
autocolors[15].green = 255;
autocolors[15].blue = 0;
autocolors[15].white = 0;

//Acid Green
autocolors[16].red = 30;
autocolors[16].green = 255;
autocolors[16].blue = 0;
autocolors[16].white = 0;

//Green Yellow
autocolors[17].red = 30;
autocolors[17].green = 255;
autocolors[17].blue = 0;
autocolors[17].white = 30;

//Yellow
autocolors[18].red = 80;
autocolors[18].green = 255;
autocolors[18].blue = 0;
autocolors[18].white = 0;

//Gold
autocolors[19].red = 105;
autocolors[19].green = 255;
autocolors[19].blue = 0;
autocolors[19].white = 0;

//Sunrise
autocolors[19].red = 145;
autocolors[19].green = 255;
autocolors[19].blue = 0;
autocolors[19].white = 0;

//Light Orange
autocolors[20].red = 220;
autocolors[20].green = 255;
autocolors[20].blue = 0;
autocolors[20].white = 30;

//Orange
autocolors[21].red = 255;
autocolors[21].green = 255;
autocolors[21].blue = 0;
autocolors[21].white = 0;

//Burnt Orange
autocolors[22].red = 255;
autocolors[22].green = 160;
autocolors[22].blue = 0;
autocolors[22].white = 0;

//Blood Orange
autocolors[23].red = 255;
autocolors[23].green = 100;
autocolors[23].blue = 0;
autocolors[23].white = 0;

//Light Red
autocolors[24].red = 255;
autocolors[24].green = 60;
autocolors[24].blue = 0;
autocolors[24].white = 20;

/* Add more colors if ya want*/
}
