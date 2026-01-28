#include<stdio.h>
void main()
{
    int a[5] = {12,23,45,67,98};
    
    // now, access all array elements using loop 
    
    int i;
    for(i = 0;i < 5;i++)
    {
        printf("\nElement (%d) :  %d ",i+1,a[i]);
    }
}