#include "bits/stdc++.h"
using namespace std;
class Complex
{
	int real,imaginary;
	public:
		Complex()
		{
			real=0;
			imaginary=0;
		}
		Complex(int a,int b)
		{
			real=a;
			imaginary=b;
		}
		Complex operator+(Complex c)
		{
			this->real=real + c.real;
			this->imaginary = imaginary + c.imaginary;

			return *this;
		}
		operator double()
		{
			return sqrt(real*real + imaginary*imaginary);
		}
		void print()
		{
			if(imaginary>=0)
				cout<<"Complex Number: "<<real<<"+i"<<imaginary<<endl;
			else
				cout<<"Complex Number: "<<real<<"-i"<<abs(imaginary)<<endl;
		}
};
int main()
{
	Complex c1(1,3);
	c1.print();
	cout<<"Value of c1: "<<(double)c1<<endl;
	Complex c2(2,5);
	c2.print();
	cout<<"Value of c2: "<<(double)c2<<endl;
	Complex c3;
	c3 = c1+c2;
	c3.print();
	Complex c4;
	Complex c5(1,2);	
	c4=c3+c5;
	c4.print();
	
}