#include "bits/stdc++.h"
using namespace std;
class person
{
	string name;
	int age;
public:
	void get()
	{
		cout<<"Enter name and age: ";
		cin>>name>>age;
	}
	void print()
	{
		cout<<"Name: "<<name<<endl<<"Age: "<<age<<endl;
	}
	
};

int main()
{
	person obj;
	obj.get();
	obj.print();
}