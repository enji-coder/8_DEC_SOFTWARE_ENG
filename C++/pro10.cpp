#include<iostream>
using namespace std;
class Sample
{
	public:
		int a=10;
		
		Sample(int a)
		{
			this->a = a;	
		}	
		void display()
		{
			cout<<"\n a = "<<a;
		}
};
main()
{
	Sample obj = Sample(100);
	obj.display();
}