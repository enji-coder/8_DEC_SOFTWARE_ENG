// string comparision 

#include<stdio.h>
#include<string.h>
void main()
{
	char s1[10];
	char s2[10];
	
	printf("Enter string 1 : ");
	gets(s1);
	printf("Enter string 2 : ");
	gets(s2);
	
	if(strcmp(s1,s2) == 0)
	{
		printf("\n both are same string");
	}
	else
	{
		printf("different string ");
	}
	
}