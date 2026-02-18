#include<iostream>
using namespace std;
class A 
{
	public: 
		int a;
		void inputA()
		{
			cout<<"Enter a : ";
			cin>>a;
		}
};
class B 
{
	public: 
		int b;
		void inputB()
		{
			cout<<"\nEnter b : ";
			cin>>b;
		}
};
class C : public A,public B
{
	public: 
		int ans;
		void display()
		{
			ans = a + b;
			cout<<"ans = "<<ans;
		}
};
main()
{
	C obj  = C();
	obj.inputA();
	obj.inputB();
	obj.display();
}