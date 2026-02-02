/*
strcpy() : copy one string to another string 


*/

// without inbuilt function 
#include<stdio.h>
#include<string.h>
void main()
{   
    int i;
    char s1[20] = "hello world";
    char s2[20];
    
    for(i = 0;s1[i] != '\0';i++)
    {
        s2[i] = s1[i];
    }
    
    printf("\n %s ",s2);
}

------------------------------------
#include<stdio.h>
#include<string.h>
void main()
{   
    int i;
    char s1[20] = "hello world";
    char s2[20];
    
    for(i = 0;s1[i] != '\0';i++)
    {
        if (s1[i]!=' ')
        {
            s2[i] = s1[i];    
        }
    }
    
    printf("\n %s ",s2);
}