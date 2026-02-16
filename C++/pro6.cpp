#include<iostream>
using namespace std;
class Student
{
	public: // public mode 
		int id;		// data member 
		string name;
		
		void input()
		{
			cout<<"Enter id : ";
			cin>>id;
			cout<<"Enter name : ";
			cin>>name;
		}
		void display()
		{
			cout<<"\n id = "<<id;
			cout<<"\n name = "<<name;
		}
		
};
int main()
{
	Student obj = Student();
	obj.input();
	obj.display();
}