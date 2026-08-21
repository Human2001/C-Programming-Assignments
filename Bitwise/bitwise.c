#include <stdio.h>
#include "bitwise.h"
unsigned char modifiedreg(unsigned char reg)
{
    //set bit 2
    reg |=(1<<2);
    //clear bit 5
    reg &= ~(1<<5);
    //toggle bit 0
    reg ^= (1<<0);
    return reg;
}