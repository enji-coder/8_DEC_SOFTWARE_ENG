#include<stdio.h>
struct Student
{
	int id;
	char name[20];
	char subject[20];
	
};  
main()
{
	// Array of structure 
	// we want to accept multiple students detailes 
	
	struct Student s1[3];
	int i;
	printf("\n Enter student information :: \n");
	for(i=0;i<3;i++)
	{
		printf("Enter student id : ");
		scanf("%d",&s1[i].id);
		getchar();// for cleaning garbage value
		printf("Enter student name : ");
		gets(s1[i].name);
		printf("Enter student subject : ");
		gets(s1[i].subject);
		getchar();
	}
	
	printf("\n Display student information :: \n");
	for(i=0;i<3;i++)
	{
		printf("\n id : %d",s1[i].id);
		printf("\n name : %s",s1[i].name);
		printf("\n subject : %s",s1[i].subject);
		printf("\n------------");
	}
}