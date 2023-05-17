#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	int b;
	int c=0;
	char a[100];
	cout << "Enter Any String :- ";
	cin >> a;
	
	for(int i=0;i<99;i++)
	{
		if(a[i] >=48 && a[i] <=57)
		{
			b=c++;
		}
	}
		if(b>=1)
		{
			cout << "String Contains Number";
		}
		else
		{
			cout << "String Does Not Contains Number ";
		}
}
	
