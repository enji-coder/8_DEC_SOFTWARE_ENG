#include<iostream>
using namespace std;
class Student
{
	public: // public mode 
		int id;		// data member 
		string name;
		
		Student() // constructor
		{
			cout<<"\n welcome to student portal ";
			id = 10;
			name = "AAAAA";
		}
		
		void display()
		{
			cout<<"\n id = "<<id;
			cout<<"\n name = "<<name;
		}
		
};
int main()
{
	// object creation 
	Student s1; 
	s1.display();
}