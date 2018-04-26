#include "bits/stdc++.h"
using namespace std;
class perceptron1
{
	float w1,w2,t,eta;
public:
	/*void initialise(float a,float b,float c,float d)
	{
		w1=a;
		w2=b;
		t=c;
		eta=d;
	}*/
	friend class perceptron;
	/*int calculate(int,int);
	int train(int ,int, int);*/
};

class perceptron{
	public:
	void initialise(perceptron1& p, float a,float b,float c,float d)
	{
		p.w1=a;
		p.w2=b;
		p.t=c;
		p.eta=d;
	}
	int calculate(perceptron1& p,int,int);
	int train(perceptron1& p,int ,int, int);
};

int perceptron::calculate(perceptron1& p,int a,int b)
{
	float tt = a*p.w1+b*p.w2;
	
	if( tt > p.t)
		return 1;
	return 0;
}
int perceptron::train(perceptron1& p,int a,int b,int c)
{
	int foo1 = calculate(p,a,b);
	int foo2 = c;
	int rr=1;
	
	
	if(foo1 != foo2)
	{
		rr = 0;
		p.w1+=(foo2-foo1)*p.eta*a;
		p.w2+=(foo2-foo1)*p.eta*b;
		p.t+=(foo1-foo2)*p.eta;
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
	perceptron1 pp1;
	perceptron pp;
	pp.initialise(pp1,100.0,100.0,50.0,0.1);
	int Ok=0;
	
	//train
	while(Ok!=4)
	{
		Ok=0;
		
		if( pp.train(pp1,tt[0][0],tt[0][1],tt[0][2] ))
			Ok++;
		if( pp.train(pp1,tt[1][0],tt[1][1],tt[1][2] ))
			Ok++;
		if( pp.train(pp1,tt[2][0],tt[2][1],tt[2][2] ))
			Ok++;
		if( pp.train(pp1,tt[3][0],tt[3][1],tt[3][2] ))
			Ok++;
		//cout<<w1<<" "<<w2<<" "<<t<<endl;
	}
	
	cout<<"trained"<<endl;
	 
	
	cout<<"0 ---> "<<(pp.calculate(pp1,0,0))<<endl;
	cout<<"0 ---> "<<(pp.calculate(pp1,0,1))<<endl;
	cout<<"0 ---> "<<(pp.calculate(pp1,1,0))<<endl;
	cout<<"1 ---> "<<(pp.calculate(pp1,1,1))<<endl;	
}