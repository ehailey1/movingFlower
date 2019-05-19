/*
 * File:   controller.c
 * Author: Evan Hailey
 *
 * Created on May 15, 2019, 10:54 AM
 */

#include <xc.h>

#include "controller.h"
#include "servo.h"
#include "led.h"

void controllerTask(){
    /* if button is pressed, execute the following */
    if(PORTBbits.RB6 == 0){
        moveRight();
        moveLeft();
        LED_setColor(0, 0, 0);
    }
}
