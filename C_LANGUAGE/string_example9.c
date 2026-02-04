#include<stdio.h>
#include<string.h>
void main()
{
	char s1[10];
	char s2[10];
	int flag=0,i=0;
	printf("Enter string 1 : ");
	gets(s1);
	printf("Enter string 2 : ");
	gets(s2);
	
	while(s1[i]!='\0' ||  s2[i]!='\0')
	{
		if(s1[i] != s2[i])
		{
			flag=1;
		}
		i++;
	}
	if(flag==1)
	{
		printf("\n both strings are different");
	}
	else
	{
		printf("\nboth strings are same");
	}
	
}