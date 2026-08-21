#include <limits.h>
#include "array.h"
int secondLargest(int arr[], int size)
{
    int Largest = INT_MIN;
    int secLargest = INT_MIN;
    for (int i=0;i<size;i++)
    {
        if (arr[i]>Largest)
        {
            secLargest = Largest;
            Largest = arr[i];
        }
        else if(arr[i]>secLargest&&arr[i]!=Largest)
        {
            secLargest=arr[i];
        }
    }
    return secLargest;
}