#include<stdio.h>
void main()
{
    float a[5] = {12.23,45.67,89.56};
    int i;
    
    for(i = 0;i< 5;i++)
    {
        printf("\n Element (%d) = %0.2f ",i+1,a[i]);
    }
}