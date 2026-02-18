#include<iostream>
using namespace std;
class A 
{
	public:
		int num1;
		
		void inputA()
		{
			cout<<"Enter number 1 : ";
			cin>>num1;
		}
};
class B : public A 
{
	public:
		int num2;
		
		void inputB()
		{
			cout<<"Enter number 2 :";
			cin>>num2;
		}
};
class C: public B 
{
	public:
		int ans;
		void display()
		{
			ans = num1 + num2;
			cout<<"\n ans = "<<ans;	
		}			
};
main()
{
	C obj=C();
	obj.inputA();
	obj.inputB();
	obj.display();
}