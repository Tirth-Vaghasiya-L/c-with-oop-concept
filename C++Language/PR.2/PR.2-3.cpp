#include<iostream>
using namespace std;

int fact(int x)
{
	if(x==1 || x==0)
	{
		
	}
	else
	{
		return x*fact(x-1);
	}
   
}


int main()
{
	int n,b;
	
	cout << "Enter Number To Find Factorial :- ";
	cin >> n;
	
	cout << fact(n);				
}


