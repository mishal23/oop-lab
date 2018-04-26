#include "bits/stdc++.h"
using namespace std;

int main()
{
	char x;

	// Writing in the files
	ofstream outCountry, outCapital;
	outCountry.open("country.txt");
	outCapital.open("capital.txt");
	if(!outCountry) 
	{
    	cerr<<"Unable to create file country.txt"<<endl;
    	exit(1); 
	}
	else
	{
		outCountry<<"India\nRussia\nChina"<<endl;
	}
	outCountry.close();
	if(!outCapital) 
	{
    	cerr<<"Unable to create file capital.txt"<<endl;
    	exit(1); 
	}
	else
	{
		outCapital<<"Delhi\nMoscow\nBeijing"<<endl;
	}
	outCapital.close();

	// Reading the file
	ifstream inCountry, inCapital;
	inCountry.open("country.txt");
	inCapital.open("capital.txt");

	char capital[100],country[100];
	if(!inCountry)
	{
		cerr<<"Unable to open file country.txt"<<endl;
		exit(1);
	}
	if(!inCapital)
	{
		cerr<<"Unable to open file capital.txt"<<endl;
		exit(1);
	}
	cout<<endl;
	cout<<"Country - Capital\n"<<endl;
	while(inCountry>>country && inCapital>>capital)
	{
		cout<<country<<" - "<<capital<<endl;
	}
	inCountry.close();
	inCapital.close();

	cout<<endl;
}