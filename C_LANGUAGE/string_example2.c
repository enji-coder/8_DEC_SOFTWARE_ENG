#include<stdio.h>
#include<string.h>
int main()
{
    char name[10]="Anjali";
    
    printf("%d",strlen(name));
}

/*
strlen() : using of this method we can find length of string 
*/
#include<stdio.h>
int main()
{
    char name[6]= {'h','e','l','l','o'};
    int i;
    int count=0;
    
    for(i=0;name[i]!='\0';i++)
    {
        printf("\n %c",name[i]);
        count++;
    }
    printf("length = %d",count);
}