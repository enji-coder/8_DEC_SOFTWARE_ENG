// function with return type and function with parameters 
#include <stdio.h>
int sum(int a,int b)
{
   return a + b; 
}

int main()
{
    int num1,num2,ans;
    printf("Enter number 1 : ");
    scanf("%d",&num1);
    printf("Enter number 2 : ");
    scanf("%d",&num2);
    
    ans = sum(num1,num2);
    printf("\n ans = %d ",ans);
}