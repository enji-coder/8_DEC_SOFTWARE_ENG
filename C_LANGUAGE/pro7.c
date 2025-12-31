#include<stdio.h>
void main()
{
    int num1,num2;
    printf("Enter a number 1 : ");
    scanf("%d",&num1);
    
    printf("Enter a number 2 : ");
    scanf("%d",&num2);
    
    if(num1 > num2)
    {
        printf("%d is a greater",num1);
    }
    else
    {
        printf("%d is a greater",num2);
    }
}