#include<iostream>
using namespace std;
class RBI
{
	public:
	void roi()
	{
		cout<<"8.5"<<endl;
	}
};
class SBI:public RBI
{
	
};
class BOI:public RBI
{
	
};
main()
{
	SBI sbi = SBI();
	BOI boi = BOI();
	
	sbi.roi();
	boi.roi();
}

// there is no data hiding between multiple childd from same parent 

#include<iostream>
using namespace std;
class RBI   // this is call abstract class 
{
	public:
	virtual void roi() = 0; // abstract method / pure virtual function 
};
class SBI:public RBI
{
	public:
	void roi()   // abstraction concept achieved
	{
		cout<<"\n 8.5";
	}
};
class BOI:public RBI
{
	public:
	void roi()		// abstraction concept achieved
	{
		cout<<"\n 7.5";
	}
};
main()
{
	SBI sbi = SBI();
	BOI boi = BOI();
	
	sbi.roi();
	boi.roi();
}