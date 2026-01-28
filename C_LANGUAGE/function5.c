// function with return type 
#include <stdio.h>
int sum()
{
    int num1,num2;
    int ans;
    printf("Enter number 1 : ");
    scanf("%d",&num1);
    printf("Enter number 2 : ");
    scanf("%d",&num2);
    
    ans = num1 + num2;
    return ans;
}

int main()
{
    int res;
    res = sum(); // function calling and return values 
    printf("\n res = %d",res);
}