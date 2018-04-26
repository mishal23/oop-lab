#include "bits/stdc++.h"
using namespace std;
int main()
{
	char a[100];
	cout<<"Enter string: ";
	cin.getline(a,100);
	int i;
	for(i=1;i<=strlen(a);i++)
	{
		if(a[i]==' ')
		{

		}
		else
		{
			cout.write(a,i);
			cout<<endl;
		}
	}
	for(i=strlen(a)-1;i>=0;i--)
	{
		if(a[i]==' ')
		{

		}
		else
		{
			cout.write(a,i);
			cout<<endl;
		}
	}
}