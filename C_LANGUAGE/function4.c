#include<stdio.h>
//step 1 :  function declaration 
void add(int num1,int num2); // function with parameters 
void main()
{
    int n1,n2;
    
    printf("Enter number 1 : ");
    scanf("%d",&n1);
    
    printf("Enter number 2 : ");
    scanf("%d",&n2);
    
    // function calling ;
    
    add(n1,n2);
}

void add(int num1,int num2)
{
    int ans;
    printf("\n ans = %d",num1 + num2);
}