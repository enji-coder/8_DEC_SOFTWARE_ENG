// accept 3 numbers from user and check which number is greater 

// hint : use nested if statement 
#include<stdio.h>
void main()
{
    int num1,num2,num3;
    printf("Enter number 1 : ");
    scanf("%d",&num1);
    printf("Enter number 2 : ");
    scanf("%d",&num2);
    printf("Enter number 3 : ");
    scanf("%d",&num3);
    //  n1 = 10 , n2 = 20 , n=34
    if(num1 > num2)
    {
        if(num1 > num3)
        {
            printf("\n number 1 is a greatest number");
        }
        else
        {
            printf("\n number 3 is a greatest number");
        }
    }
    else 
    {
        if(num2 > num3)
        {
            printf("\n number 2 is a greatest number");
        }
        else
        {
            printf("\n number 3 is a greatest number");
        }
    }
}