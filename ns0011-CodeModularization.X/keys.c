/*
 * File:   keys.c
 * Author: 19180077
 *
 * Created on 13 de Março de 2020, 08:42
 */


#include <xc.h>
#include "keys.h"

void beginningKEYS(void)
{
    TRISDbits.TRISD3 = 1;
    TRISDbits.TRISD2 = 1;
}
unsigned char key1( void )
{
    return( PORTDbits.RD3 );
}
unsigned char key2( void )
{
    return( PORTDbits.RD2 );
}
