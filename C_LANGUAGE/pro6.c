#include<stdio.h>
void main()
{
    //increment 
    //  prefix   -  postfix 
    
    // ++x      x++ 
    // post fix  ::: 
    int x = 10;
    printf("\nx = %d",x); // x = 10 
    x++; // 10 + 1 
    printf("\nx = %d",x); // x = 11 
    
    printf("\nx = %d",x++); // x = 11 
    printf("\nx = %d",x); //x = 12 
}   