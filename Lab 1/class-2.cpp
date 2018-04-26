#include "bits/stdc++.h"
using namespace std;
class complex1
{
	int a,b;
public:
	void getval();
	void print();
	
};

void complex1::getval()
{
	cin>>a>>b;
}
void complex1::print()
{
	if(b==0)
		cout<<a<<endl;
	else if(b<0)
		cout<<a<<"-i"<<b<<endl;
	else
		cout<<a<<"+i"<<b<<endl;

	cout<<sqrt(a*a+b*b)<<endl;
}
int main()
{
	complex1 obj;
	obj.getval();
	obj.print();
}