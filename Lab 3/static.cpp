#include "bits/stdc++.h"
using namespace std;
class trial
{
	public:
		static int count;
		trial(){
			count++;
		}
		
};

int trial::count=0;
int main()
{
	int i;
	for(i=0;i<10;i++)
	{
		trial test;
		cout<<test.count<<endl;	
	}
	
	
}