#include<iostream>
using namespace std;

inline int factorial(int a[],int x)
{
	int fact = 1;
	for (int i =0; i<x; i++)
	{
    	fact *= a[i];
  	}
  	cout << fact << endl;
  	
}


int main()
{
	int n;
	
	cout << "Enter Size Of Array :- ";
	cin >> n;
	
	int a[n];
	
	for(int i=0;i<n;i++)
	{
		cout << "Enter Elements :- " ;
		cin >> a[i];
		
	}
	factorial(a,n);				
}


