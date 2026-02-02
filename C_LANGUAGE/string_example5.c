/*
convert string into reverse order 
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char name[20];
    printf("Enter your name : ");
    gets(name);
    
    printf("name : %s",name);
    
    printf("\n reverse : %s",strrev(name));
}