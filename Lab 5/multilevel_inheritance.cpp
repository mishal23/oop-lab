#include "bits/stdc++.h"
using namespace std;
class level1
{
	int a;
public:
	level1()
	{
		cout<<"Level1 constructor called"<<endl;
	}
	void setA(int x)
	{
		a=x;
	}
	void displaya()
	{
		cout<<"Value of a = "<<a<<endl;
	}
	
};
class level2: public level1
{
	int b;
public:
	level2()
	{
		cout<<"Level2 constructor called"<<endl;
	}
	void setB(int x)
	{
		b=x;
	}
	void displayb()
	{
		cout<<"Value of b = "<<b<<endl;
	}
	
};
class level3: public level2
{
	int c;
public:
	level3()
	{
		cout<<"Level3 constructor called"<<endl;
	}
	void setC(int x)
	{
		c=x;
	}
	void displayc()
	{
		cout<<"Value of c = "<<c<<endl;
	}
	
};
int main()
{
	level3 temp;
	int x;
	cout<<"Enter value of x: ";
	cin>>x;
	temp.setA(x);
	temp.displaya();
}