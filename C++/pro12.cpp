#include<iostream>
using namespace std;
class Sample
{
	public:
		int id=10;
		
		void display(Sample s)
		{
			this->id = s.id;
			s.id = 100;
			cout<<"\n id = "<<id;
			cout<<"\n object's id = "<<s.id;
			
		}
};
main()
{
	Sample s1;
	s1.display(s1);
	cout<<"\n s1 id = "<<s1.id;
}