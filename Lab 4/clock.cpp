#include "bits/stdc++.h"
#include "unistd.h"
using namespace std;

class Clock
{
	int hour,minutes,seconds;
public:
	Clock()
	{
		printf("Enter time in hh::mm::ss format: ");
		scanf("%d:%d:%d",&hour,&minutes,&seconds);
	}
	void display()
	{
		cout<<hour<<":"<<minutes<<":"<<seconds<<endl;
	}
	void operator++()
	{
		seconds++;
		if(seconds==60)
		{
			seconds=0;
			minutes++;
		}
		if(minutes==60)
		{
			minutes=0;
			hour++;
		}
		if(hour==24)
		{
			seconds=0;
			minutes=0;
			hour=0;
		}
	}
};

int main()
{
	Clock c;
	while(1)
	{
		++c;
		sleep(1);
		
		c.display();
	}
}