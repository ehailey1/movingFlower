/* 
 * File: led.h
 * Author: Evan Hailey
 * Comments:
 * Revision history: 
 */

// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef LED_H
#define	LED_H

#include <xc.h> // include processor files - each processor file is guarded.  
#include <stdint.h>

void LED_setColor(uint8_t red, uint8_t green, uint8_t blue);
void colorCycle();
void colorCycle_init();

typedef struct {
    uint8_t red;
    uint8_t blue;
    uint8_t green;
    uint8_t white;
}color_t;

color_t autocolors[25];

#endif	/* LED_H */

