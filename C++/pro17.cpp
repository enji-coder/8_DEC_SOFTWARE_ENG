// ambiguty practical 

#include<iostream>
using namespace std;
class A // parent 
{
	public:
		void display()
		{
			cout<<"\n hello A class is here";
		}
};
class B // parent 
{
	public:
		void display()
		{
			cout<<"\n hello B class is here";
		}
};
class C : public A,public B 
{
	public:
		void myMethod()
		{
			cout<<"\nhelllo";
		}
};
main()
{
	// object creation 
	C  obj= C();
	obj.myMethod();
	obj.display();
}