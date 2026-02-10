/*
call by value : call by value is a most powerfull concept of function and pointer topic 

    it does not change actual parameters if we apply changes in formal parameters 

    in call by value we just passing copy of value not passing actual parameter 
*/

#include<stdio.h>
void swap(int a,int b) // formal parameters 
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}
main()
{
	int a=10,b=20; // actual parameters 
	printf("\n BEFORE CHANGES IN SWAP FUNCTION ");
	printf("\n a = %d and b = %d",a,b);
	
	swap(a,b);  // call by value 
	
	printf("\n AFTER CHANGES IN SWAP FUNCTION ");
	printf("\n a = %d and b = %d",a,b);
	
}
    