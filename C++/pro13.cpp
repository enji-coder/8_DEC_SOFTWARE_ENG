#include<iostream>
using namespace std;
class Sample
{
	public:
		int id;
		
		void display(Sample &s) // pass by reference 
		{
			s.id = 100;
		}
};
main()
{
	Sample s1;
	s1.id = 10;
	cout<<"\ns1.id = "<<s1.id;
	s1.display(s1);
	cout<<"\n after changes in pass by reference \n";
	cout<<"\ns1.id = "<<s1.id;
}