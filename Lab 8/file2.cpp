#include "bits/stdc++.h"
using namespace std;
int main()
{
	ofstream writeFile("try.txt");

	char fname[100],lname[100];
	cout<<"Enter your first name: ";
	cin>>fname;

	cout<<"Enter your last name: ";
	cin>>lname;

	writeFile<<fname<<endl;
	writeFile<<lname<<endl;

	ifstream readFile("try.txt");
	char readFname[100],readLname[100];

	readFile>>readFname;
	readFile>>readLname;

	cout<<"First name: "<<readFname<<endl;
	cout<<"Last name: "<<readLname<<endl;
}