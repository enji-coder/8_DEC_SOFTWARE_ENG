#include<stdio.h>
struct Student
{
	int id;
	char name[20];
	int marks[3]; // array within structure
};  
main()
{
	// Array within structure 
	struct Student s1;
	int i;
	
	printf("\n Enter student information :: \n");
	printf("Enter student id : ");
	scanf("%d",&s1.id);
	getchar();// for cleaning garbage value
	printf("Enter student name : ");
	gets(s1.name);
	
		for(i=0;i<3;i++)
		{
			printf("\n\t\t Enter subject (%d) marks :",i+1);
			scanf("%d",&s1.marks[i]);
		}
		
	printf("\n Display student information :: \n");
	
	printf("\n id : %d",s1.id);
	printf("\n name : %s",s1.name);
	
		for(i=0;i<3;i++)
		{
			printf("\n\t\t subject %d marks : %d",i+1,s1.marks[i]);
			
		}
	printf("\n------------");
}