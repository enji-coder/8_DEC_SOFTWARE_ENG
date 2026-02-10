/*
Call by Reference :  when we pass actual parameter in function calling time 
    and apply changes in formal parameter it direct affect 
    actual parameter 

    because insted of passing copy of value here we are passing address of parameters. 

*/

#include<stdio.h>
void swap(int *a,int *b) // formal parameters 
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
main()
{
	int a = 10,b = 20; // actual parameters 
	
	printf("\n BEFORE CHANGE IN FORMAL PARAMETERS : ");
	printf("\n a = %d and b = %d ",a,b);
	
	swap(&a,&b); // call by reference 
	
	printf("\n AFTER CHANGES IN FORMAL PARAMETERS : ");
	printf("\n a = %d and b = %d ",a,b);
	
}