/*
2. Make addition of Two Complex numbers using binary + operator(using
friend function)
a. C1- 20+i30
b. C2- 14+i10
c. Resultant complex number is- 34+i40

*/


include<iostream>

using namspace std;

class complex
{

double real, img;


public:

void setdata()
{
cout<<"enter real and img number";
cin>>real>>img;
}

frind complex sum(double, double);

void display()
{
cout<<real <<"+ i"img;
}

complex sum(double a, double b)
{
complex c
c.real= a.real + b.real;
c.img = a.img + b.img;
return c;
}

};

int main()
{
complex a,b,add;
a.setdata();
b.setdata();
add=sum(a,b);
add.display();

return 0;



}
