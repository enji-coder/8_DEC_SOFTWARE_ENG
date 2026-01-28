/*
I 
IN 
IND 
INDI
INDIA

*/
#include<stdio.h>
int main()
{
    char str[10] = "INDIA";
    int i,j;
    
    for(i=0;i<5;i++)
    {
        for(j = 0;j<=i;j++)    
        {
            printf(" %c ",str[j]);
        }
        printf("\n");
    }
}