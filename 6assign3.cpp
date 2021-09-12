/*Area of Rectangle, Circle and Square.*/
#include<iostream>
using namespace std;
class Data
{
	public:
	void area(int a)
	{
		int square;
		square=4*a;
		cout<<"\n area of square ="<<square;
	}
	void area(int l,int b)
	{
		int rect;
		rect=l*b;
		cout<<"\n area of rect ="<<rect;
	}
	void area(double r)
	{
		float circle;
		circle=2*3.14*r;
		cout<<"\n area of circle ="<<circle;
	}
};
int main()
{
	Data d;
	d.area(4);
	d.area(5,4);
	d.area(3.2);
	return 0;
}
