/*Swap two integer numbers and two characters using function
overloading*/
#include<iostream>
using namespace std;
class Exchange
{
	public:
	void swap(int a, int b)
	{
		int t;
		t=a;
		a=b;
		b=t;
		cout<<"\na="<<a<<"\n b="<<b;
		
	} 
	void swap(char a, char b)
	{
		char t;
		t=a;
		a=b;
		b=t;
		cout<<"\na="<<a<<"\n b="<<b;
	}
};
int main()
{
	Exchange e;
	e.swap(100,200);
	e.swap('a','A');
	return 0;
}
	
