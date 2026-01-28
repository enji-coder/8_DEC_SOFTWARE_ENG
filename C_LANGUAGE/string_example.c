/*
String : string is a collection of chaaracters 

    in a simple language we can say that string which is a one kind of array 

    or we can say that character of array 

    syntax : 

    char name[size]= {};

    or

    char name[6] = {'h','e','l','l','o','\0'};
*/
#include<stdio.h>
int main()
{
    char name[6]= {'h','e','l','l','o'};
    int i;
    
    for(i=0;i<6;i++)
    {
        printf("\n %c",name[i]);
    }
}