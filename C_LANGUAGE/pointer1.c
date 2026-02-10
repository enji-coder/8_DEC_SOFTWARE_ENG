#include<stdio.h>
main()
{
	int a = 10;
	int *p;  // pointer variable declaration 
	
	printf("\n a = %d ",a);
	
	printf("\n address of a = %d",&a);
	
	p = &a;  // store address of a variable 
	
	printf("\n address of p = %d",p);
	printf("\n fetch value from address = %d",*p);
	
	*p = 200;
	
	printf("\nAFTER CHANGE IN ADDRESS VALUE : %d",*p);
	printf("\na variable value : %d",a);
	
}