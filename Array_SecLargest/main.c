#include <stdio.h>
#include "array.h"
int main()
{
    int size;
    printf("Enter the size of the array - ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter %d elemets \n",size);//defin the size of the array
    for(int i=0;i<size;i++)//get the elements of each array
    {
        printf("Enter the %d element - ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\nThe elements of the array are:\n");
    for (int i = 0; i < size; i++) //this loop prints the array
    {
        printf("%d ", arr[i]);
    }
    printf("Second Largest = %d\n", secondLargest(arr, size)); //function is called and returs seclargest element
    return 0;
}
//THIS WONT WORK for ASIC table, works only for numbers.