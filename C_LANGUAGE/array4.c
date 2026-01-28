#include<stdio.h>
void main()
{
    int a[5];   // array declaration 
    
    int i;
    
    for(i = 0;i< 5 ;i++)
    {
        printf("Enter number (%d): ",i+1);
        scanf("%d",&a[i]);
    }
    
    printf("\n---------------\n");
    
    for(i = 0;i< 5;i++)
    {
        printf("\n Element (%d) = %d",i+1,a[i]);
    }
}