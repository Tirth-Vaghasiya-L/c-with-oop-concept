#include<iostream>
#include<string.h>
using namespace std;

class motor
{
	protected:
		char a[100];
	public:
		motor()
		{
			strcpy(a,"ISSUE : I Have Water In My Fuel Pipe");
			throw a;
		}
};

class garage : public motor
{
	public:
		garage()
		{
			try
			{
				motor m;
			}
			catch(char b[100])
			{
				throw b;
			}
		}
};

int main()
{
	try
	{
		garage car;
		
	}
	catch(char d[100])
	{
		strcat(d," Issue Fixed!!");
		cout << d;
	}
}
