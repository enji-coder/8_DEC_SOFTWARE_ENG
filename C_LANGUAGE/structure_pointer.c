#include<stdio.h>
struct Student
{
	int id;
	char name[20]; 
};
main()
{
	// structure variable declaration 
	struct Student s1;
	// pointer variable declaration 
	struct Student *p = &s1; 
	
	// note : when we access structure member using of structure variable 
	// we have to use .(dot operator)  e.g.  s1.name , s1.marks
	
	// note : when we want to access structure member using of pointer 
	// variable we have to use -> (arrow operator) e.g. p1->name, p1->marks
	
	printf("Enter id : ");
	scanf("%d",&p->id);
	getchar();
	printf("Enter name : ");
	gets(p->name);
	
	printf("\n id = %d",p->id);
	printf("\n name = %s",p->name);
		
}