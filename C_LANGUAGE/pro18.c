/*
factorial : 3  

3*2*1

e.g.   5

5*4*3*2*1

f = 1 
     1 to 5 

    
*/
#include<stdio.h>
void main()
{
    // accept number from user and find factorial value. 
    // using of for loop 
    
    int f = 1; // this will store your factorial result 
    int i; // for loop iteration 
    int num; // it will accept number from user 
    
    printf("Enter a number : ");
    scanf("%d",&num);
    
    for(i=1;i<=num;i++)
    {
       f *= i; 
    }
    
    printf("\n factorial = %d",f);
}