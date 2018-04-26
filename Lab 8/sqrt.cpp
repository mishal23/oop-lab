#include "bits/stdc++.h"
using namespace std;
int main()
{
	
	int i;
	for(i=1;i<=10;i++)
	{
		if(i==10)
		{
			cout<<"Square root of number "<<i<<": ";
			cout.fill('*');
			cout.width(10);
			cout.precision(4);
			cout<<sqrt(i)<<endl;	
		}
		else
		{
			cout<<"Square root of number "<<i<<" : ";
			cout.fill('*');
			cout.width(10);
			cout.precision(4);
			cout<<sqrt(i)<<endl;
		}		
	}
}