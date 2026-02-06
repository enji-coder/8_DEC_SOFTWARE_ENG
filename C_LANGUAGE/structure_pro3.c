#include<stdio.h>
struct Student
{
	int id;
	char name[20];
	char subject[20];
};  
main()
{
	struct Student s1; //variable creation 
	
	printf("\n  Enter student detailes :: \n");
	
	printf("\n Enter id : ");
	scanf("%d",&s1.id);
	getchar();
	printf("\n Enter name : ");
	gets(s1.name);
	printf("\n Enter subject : ");
	gets(s1.subject);
	
	printf("\n  student detailes :: \n");
	
	printf("\n id : %d",s1.id);
	printf("\n name : %s",s1.name);
	printf("\n subject : %s",s1.subject);
}