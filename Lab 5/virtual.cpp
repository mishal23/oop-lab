#include "bits/stdc++.h"
using namespace std;
class A1
{
	int a,b;
public:
	A1(int x,int y)
	{
		a=x;
		b=y;
	}
	void display()
	{
		cout<<"Value of a: "<<a<<endl;
		cout<<"Value of b: "<<b<<endl;
	}
	
};

class B1:public A1
{
	int c;
public:
	B1(int x,int y):A1(x,y)
	{
		c=0;
	}
	void display1()
	{
		cout<<"C = "<<c<<endl;
	}
};
int main()
{
	B1 obj(10,20);
	obj.display();
}