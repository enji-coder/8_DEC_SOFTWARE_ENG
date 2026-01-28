#include<stdio.h>
#include<string.h>
int main()
{
    char name[10];
    
    printf("Enter your name : ");
    //scanf("%s",&name);
    gets(name);
    
    //getchar();
    printf("\n name = %s",name);
    printf("\n length = %d",strlen(name));
}