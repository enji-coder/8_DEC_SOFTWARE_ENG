/*
LowerCase and UpperCase 

when we want to convert any character into lowercase there is one method 

tolower() 

and to convert character into upper case there is one method 

toupper() 

but both methods are connected with ctype header file 

    e.g.  #include<ctype.h> 
*/
/*
convert string into lowerCase() 
*/
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char name[20];
    int i;
    printf("Enter your name : ");
    gets(name);
    
    printf("name : %s",name);
    
    for(i = 0;name[i] != '\0';i++)
    {
        name[i] = tolower(name[i]);
    }
    printf("\n %s ",name);
    
}
