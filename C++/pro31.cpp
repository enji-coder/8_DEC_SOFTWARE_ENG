#include<iostream>
using namespace std;
class Sample 
{
	private:
		int score = 100; // private member 
		
	public:
		friend void displayScore(Sample obj); // method declaration only 
};
// outside the class 
void displayScore(Sample obj)
{
	cout<<"\n score = "<<obj.score;
}
main()
{
	Sample obj=Sample();
	displayScore(obj);
	
}