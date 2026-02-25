#include<iostream>
using namespace std;
class Vehicle
{
	public:
		virtual void wheels() = 0; // pure virtual function or abstract method 
};
class Car : public Vehicle 
{
	public:
		void wheels()
		{
			cout<<"\n i have 4 wheels";
		}	
};
class Bike : public Vehicle 
{
	public:
		void wheels()
		{
			cout<<"\n i have 2 wheels";
		}
};
main()
{
	Car car = Car();
	Bike bike = Bike();
	
	car.wheels();
	bike.wheels();
}