#include "bits/stdc++.h"
using namespace std;
class perceptron
{
	float w1,w2,t,eta;
public:
	void initialise(float a,float b,float c,float d)
	{
		w1=a;
		w2=b;
		t=c;
		eta=d;
	}
	int calculate(int,int);
	int train(int ,int, int);
};

int perceptron::calculate(int a,int b)
{
	float tt = a*w1+b*w2;
	
	if( tt > t)
		return 1;
	return 0;
}
int perceptron::train(int a,int b,int c)
{
	int foo1 = calculate(a,b);
	int foo2 = c;
	int rr=1;
	
	
	if(foo1 != foo2)
	{
		rr = 0;
		w1+=(foo2-foo1)*eta*a;
		w2+=(foo2-foo1)*eta*b;
		t+=(foo1-foo2)*eta;
	}
	
	return rr; 	
}
int main()
{
	int tt[4][3]={
				{0,0,0},
				{0,1,0},
				{1,0,0},
				{1,1,1}		
			};
	perceptron pp;
	pp.initialise(100.0,100.0,50.0,0.1);
	int Ok=0;
	
	//train
	while(Ok!=4)
	{
		Ok=0;
		
		if( pp.train(tt[0][0],tt[0][1],tt[0][2] ))
			Ok++;
		if( pp.train(tt[1][0],tt[1][1],tt[1][2] ))
			Ok++;
		if( pp.train(tt[2][0],tt[2][1],tt[2][2] ))
			Ok++;
		if( pp.train(tt[3][0],tt[3][1],tt[3][2] ))
			Ok++;
		//cout<<w1<<" "<<w2<<" "<<t<<endl;
	}
	
	cout<<"trained"<<endl;
	 
	
	cout<<"0 ---> "<<(pp.calculate(0,0))<<endl;
	cout<<"0 ---> "<<(pp.calculate(0,1))<<endl;
	cout<<"0 ---> "<<(pp.calculate(1,0))<<endl;
	cout<<"1 ---> "<<(pp.calculate(1,1))<<endl;	
}