#include<iostream>
using namespace std;
class Sample // class is a keyword and sample is a classname
{
	public: // public mode 
		int a;  // data member 
		string name; 
		
};
int main()
{
	// object creation 
	Sample obj = Sample();
	obj.a = 10;
	obj.name = "AAA";
	
	cout<<"\na = "<<obj.a;
	cout<<"\nname = "<<obj.name;
}