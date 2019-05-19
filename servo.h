/* 
 * File: servo.h
 * Author: Evan Hailey
 * Comments:
 * Revision history: 
 */

// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef SERVO_H
#define	SERVO_H

#include <xc.h> // include processor files - each processor file is guarded.  

void moveRight(void);
void moveLeft(void);

#endif	/* SERVO_H */

