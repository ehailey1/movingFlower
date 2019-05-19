/**
  Generated Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This is the main file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.76
        Device            :  PIC16F18446
        Driver Version    :  2.00
*/

#include "mcc_generated_files/mcc.h"
#include "controller.h"
#include "servo.h"
#include "led.h"

void main(void){
    
    /* initialize the device */
    SYSTEM_Initialize();
    colorCycle_init();
    
    /* set pin 6 on port B as an output*/
    TRISBbits.TRISB6 = 1;
    LATBbits.LATB6 = 0;
    
    /* never ending loop checking to see if a button has been pressed...
     probably should implement a sleep function in the future. */
    while(1){
        controllerTask();
    }
}
/**
 End of File
*/