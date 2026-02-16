#include<iostream>
using namespace std;
class Student
{
	public: // public mode 
		int id;		// data member 
		string name;
		
		// parameterized constructor 
		Student(int idValue,string nameValue)
		{
			id = idValue;
			name = nameValue;
		}
		void display()
		{
			cout<<"\n id = "<<id;
			cout<<"\n name ="<<name;
		}	
};
int main()
{
	Student obj(101,"AAAA");
	obj.display();
}