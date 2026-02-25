#include<iostream>
using namespace std;
class Parent
{
	public:
		void display()
		{
			cout<<"\n this is display method";
		}
};
class Child:public Parent
{
	public:
		void display()
		{
			Parent::display();
			cout<<"\n this is child class display method";
		}
};
main()
{
	Child obj = Child();
	obj.display();
}