#include<iostream>
using namespace std;
class A
{
	public:
		int num1,num2;
		
		void input()
		{
			cout<<"\nEnter number1 : ";
			cin>>num1;
			cout<<"\nEnter number 2 : ";
			cin>>num2;
		}	
		void display()
		{
			cout<<"\n number 1 : "<<num1;
			cout<<"\n number 2 : "<<num2;
		}
};
class B :public A
{
	public:
		int ans;
		void addition()
		{
			ans = num1 + num2;
			cout<<"\n ans = "<<ans;
		}
};
class C: public A 
{
	public:
		int ans;
		void multiplication()
		{
			ans= num1 * num2;
			cout<<"\n ans = "<<ans;
		}
};
main()
{
	B objB = B();
	C objC = C();
	
	objB.input();
	objB.display();
	objB.addition();
	
	cout<<"\n\n";
	
	objC.input();
	objC.display();
	objC.multiplication();	
}