/*
 * File:   leds.c
 * Author: 19180077
 *
 * Created on 13 de Março de 2020, 08:42
 */


#include <xc.h>
#include "leds.h"

//              DEFINES
#define LED0    PORTDbits.RD0
#define LED1    PORTDbits.RD1

void beginningLEDS(void) 
{
    LED0 = 0;
    LED1 = 0;
    TRISDbits.TRISD0 = 0;
    TRISDbits.TRISD1 = 0;
    
}
void onLEDS(void)
{

    LED0 = 1;
    LED1 = 1;

}
void offLEDS(void)
{

    LED0 = 0;
    LED1 = 0;
    
}
unsigned char readLED0 (void)
{ 
    return( LED0 );
}
unsigned char readLED1 (void)
{ 
    return( LED1 );
}