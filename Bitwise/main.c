#include <stdio.h>

#include "bitwise.h"
//main code
int main()
{
    unsigned char reg;
    printf("enter the register value in HEX : 0x");
    scanf("%hhx",&reg);
    printf("the original reg : 0x%02X",reg);
    reg = modifiedreg(reg);
    printf("Modified regester : 0x%02X",reg);
    return 0;
} 
//Bitwise operation function
