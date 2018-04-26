#include "bits/stdc++.h"
using namespace std;
class A1
{
	int a,b;
public:
	void set_val1()
	{
		a=10;
		b=20;
	}
	void display1()
	{
		cout<<"Value of a = "<<a<<endl<<"Value of b = "<<b<<endl;
	}
};
class B1:public A1
{
	int c;
public:
	void set_val()
	{
		c=100;
	}
	void display()
	{
		cout<<"Value of c ="<<c<<endl;
	}
	
};
int main()
{
	B1 x;
	x.set_val1();
	x.display1();
	return 0;
}