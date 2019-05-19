/*
 * File:   servo.c
 * Author: Evan Hailey
 *
 * Created on May 15, 2019, 10:58 AM
 */


#include <xc.h>
#include <stdint.h>

#include "mcc_generated_files/mcc.h"
#include "servo.h"
#include "led.h"

/* begin at 30, this is equivalent to "0" degrees
 * if 30 < i < 70, servo moves one direction
 * if 0 < i < ~15, servo moves the other direction
 */

uint16_t i = 30; 

/* Pretty lazy way to move micro servo from 0 to 180 degrees */

void moveRight(void){
    //changing what i is less than changes how far the servo will move
    while(i < 70){
        PWM1_LoadDutyValue(i);
        __delay_ms(120);
        i++;
        //function for led lights
        colorCycle();
    }
}

void moveLeft(void){
    while(i > 15){
        PWM1_LoadDutyValue(i);
         __delay_ms(120);
         i--;
         colorCycle();
    }
}
