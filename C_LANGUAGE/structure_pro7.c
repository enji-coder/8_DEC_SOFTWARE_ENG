#include<stdio.h>

struct Student
{
	int id;
	char name[20];
	struct Address
	{
		char city[20];
		int pincode;
	}add;
};
struct emp 
{
	int id;
	char empname[20];
//	struct Address add;
};
main()
{
		// student structure object creation 
		struct Student s1;
		
		printf("Enter student id : ");
		scanf("%d",&s1.id);
		
		getchar();
		
		printf("Enter student name : ");
		gets(s1.name);
		
		printf("\n\tEnter student Address : ");
		printf("\t Enter city : ");
		gets(s1.add.city);
		printf("\t Enter pincode : ");
		scanf("%d",&s1.add.pincode);
		
		getchar();
		
}