#include<iostream>
using namespace std;
class A
{
	public:
		int marks = 100;
		void hello()
		{
			cout<<"\nhello";
		}
};
class B : public A
{
	public:
		void displayB()
		{
			cout<<"\n marks : "<<marks;
		}
};
class C : public A 
{
	public:
		void displayC()
		{
			cout<<"\n marks : "<<marks;
		}
};
class D : public B , public C
{
	
};
main()
{
	D obj = D();
	obj.displayB();
	obj.displayC();
	
//	obj.hello();
//	obj.A::hello();
}