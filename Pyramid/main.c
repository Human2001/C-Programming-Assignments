#include<stdio.h>
#include"pyramid.h"
int main(void)
{
    int lines;
    printf("Enter the no of lines required in the pyramid :"); //ask the lines required 
    scanf("%d",&lines); //read the number of lines given
    printpyramid(lines);//call a function
    return 0;
}