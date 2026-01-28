#include<stdio.h>
void main()
{
    // accept 5 numbers from user and findout maximum or largest element from the array 
    
    int a[5] = {12,34,56,45,6};
    
    int i;
    int max;
    
    max = a[0]; // 12 
    
    for(i = 1;i<5;i++)
    {
        if(a[i] > max)
        {
            max = a[i];
        }
    }
    printf("\n maximum value = %d",max);
}