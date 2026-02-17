// without using this pointer with same name parameter and same name member
#include<iostream>
using namespace std;
class Sample
{
	public:
		int a = 10; // variable of class memory 
		
		Sample(int a) // constructor
		{
			a = a;
			cout<<"\n inside the constructor : a = "<<a;
		}	
		
		void display()
		{
			cout<<"\na = "<<a;
		}
};
main()
{
	Sample obj= Sample(200);
	obj.display();
}


/// solution :::: 

#include<iostream>
using namespace std;
class Sample
{
	public:
		int a = 10; // variable of class memory 
		
		Sample(int a1) // constructor
		{
			a = a1;
			cout<<"\n inside the constructor : a = "<<a;
		}	
		void display()
		{
			cout<<"\na = "<<a;
		}
};
main()
{
	Sample obj= Sample(200);
	obj.display();
}