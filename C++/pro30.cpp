#include<iostream>
using namespace std;
class Address
{
	public:
		string city;
		string state;
		int  pincode;
		
		Address(string city,string state,int pincode)
		{
			this->city = city;
			this->state = state;
			this->pincode = pincode;
		}	
};
class Student
{
	public:
		string name;
		Address* address; // reference of Address class 
		
		Student(string name,Address* address)
		{
			this->name = name;
			this->address = address;
		}	
		
		void display()
		{
			cout<<"\n name : "<<name;
			cout<<"\n city : "<<address->city;
			cout<<"\n state : "<<address->state;
			cout<<"\n pincode : "<<address->pincode;
		}
};
main()
{
	Address a1 = Address("Ahmedabad","Gujarat",380015);
	Student s1 = Student("Aarav",&a1);
	
	s1.display();
}