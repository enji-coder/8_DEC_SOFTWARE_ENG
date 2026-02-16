/*
>> : extraction operator 
<< : insertion operator 
*/
#include<iostream>
using namespace std;
int main()
{
	// in c++ we can declare anywhere in program 
	// in c language we have to declare variable at top of the block
	
	int num; // variable declaration 
	
	cout<<"Enter a number : ";
	cin>>num;
	
	// note : there is no need to use %d %s any placeholder 
	cout<<"number = "<<num<<endl;
}