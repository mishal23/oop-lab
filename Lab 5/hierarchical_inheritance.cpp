#include "bits/stdc++.h"
using namespace std;
class roll_number
{
	int roll_number;
public:
	void getRollNumber()
	{
		cout<<"Enter RollNumber: ";
		cin>>roll_number;
	}	
	void displayRollNumber()
	{
		cout<<"Roll Number: "<<roll_number<<endl;
	}
};
class exam: public virtual roll_number
{
	float t1_marks,t2_marks;
public:
	void getMarks()
	{
		cout<<"Enter test1 marks: ";
		cin>>t1_marks;
		cout<<"Enter test2 marks: ";
		cin>>t2_marks;
	}
	void displayMarks()
	{
		cout<<"Test1 marks: "<<t1_marks<<endl;
		cout<<"Test2 marks: "<<t2_marks<<endl;
	}
	
};
class sports: public virtual roll_number
{
	char game[100];
public:
	void getSports()
	{
		cout<<"Enter your favourite sports: ";
		cin>>game;
	}
	void displaySport()
	{
		cout<<"Your favourite sports: "<<game<<endl;
	}
	
};
class student: public sports,public exam
{
public:
	void display()
	{
		displayRollNumber();
		displayMarks();
		displaySport();
	}
};
int main()
{
	student obj;
	obj.getRollNumber();
	obj.getMarks();
	obj.getSports();
	obj.display();
}