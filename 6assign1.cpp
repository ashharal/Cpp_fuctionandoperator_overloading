/*Demonstrate function overloading for addition of two integer and two
floating point numbers.*/
#include<iostream>
using namespace std;
class Addition
{
	public:
	void Add(int a, int b)
	{
		cout<<"\naddition of two integer number is "<<(a+b);
	}
	void Add(double a, double b)
	{
		cout<<"\n addition of two float number is "<<(a+b);
	}
};
int main()
{
	Addition a;
	a.Add(100,200);
	a.Add(25.5,45.3);
	return 0;
}

	
