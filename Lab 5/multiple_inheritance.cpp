#include "bits/stdc++.h"
using namespace std;
class A
{
	int x;
public:
	void inputA()
	{
		cout<<"Enter value of x: ";
		cin>>x;
	}
	int getA()
	{
		return x;
	}
};
class B
{
	int y;
public:
	void inputB()
	{
		cout<<"Enter value of y: ";
		cin>>y;
	}
	int getB()
	{
		return y;
	}
};
class derived: public A,public B
{
public:
	void display()
	{
		cout<<endl;
		cout<<"Addition of the two numbers is: "<<((A::getA())+(B::getB()))<<endl;
		cout<<"Subtraction of the two numbers is: "<<((A::getA())-(B::getB()))<<endl;
		cout<<"Multiplication of the two numbers is: "<<((A::getA())*(B::getB()))<<endl;
		cout<<"Division of the two numbers is: "<<((float)(A::getA())/(B::getB()))<<endl;
	}
	
};

int main()
{
	derived x1;
	x1.inputA();
	x1.inputB();
	x1.display();
}