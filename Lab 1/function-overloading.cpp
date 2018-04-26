#include "bits/stdc++.h"
using namespace std;
int volume(int l)
{
	return l*l*l;
}
int volume(int l,int b,int h)
{
	return l*b*h;
}
int volume(int h,int r)
{
	return (22.0/7.0)*r*r*h;
}
int main()
{
	int l,b,h,r,choice;
	cout<<"\nMENU\n"<<endl;
	cout<<"1 for cube\n2 for cuboid\n3 for cylinder"<<endl;
	while(1)
	{
		cout<<"Enter your choice: ";
		cin>>choice;
		switch(choice)
		{
			case 1:
				cout<<"Enter length of side of cube: ";
				cin>>l;
				cout<<"Volume of cube: "<<volume(l)<<endl;
				break;
			case 2:
				cout<<"Enter length, breadth, height of sides of cuboid: ";
				cin>>l>>b>>h;
				cout<<"Volume of cuboid: "<<volume(l,b,h)<<endl;
				break;
			case 3:
				cout<<"Enter height and radius of cylinder: ";
				cin>>h>>r;
				cout<<"Volume of cylinder: "<<volume(h,r)<<endl;
				break;
			default:
				cout<<"Wrong choice"<<endl;
				break;
		}
	}
}