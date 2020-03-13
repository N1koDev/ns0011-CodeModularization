/*
 * File:   main.c
 * Author: 19180077
 *
 * Created on 13 de Março de 2020, 08:42
 */


#include <xc.h>
#include "config.h"
#include "leds.h"
#include "keys.h"

void main (void)
{
    beginningLEDS();
    beginningKEYS();
    while( 1 )
    {
        if( key1() == 1 )
        {
           onLEDS(); 
        }
        else
        {
           offLEDS();
        }
    }
    return;
}