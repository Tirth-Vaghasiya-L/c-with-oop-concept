#include<iostream>
using namespace std;

int main()
{
	int n[1000];
	int a = 0;
	int i;
	for(i=2020;i<=3030;i++)
	{
		if(i%4==0)
		{
			n[a] = i;
			cout <<  n[a] << "is leap year\t";
			a++;
		}
	}
	 
}
