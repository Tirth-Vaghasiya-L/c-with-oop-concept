#include<iostream>
using namespace std;

int main()
{
	int i,n,j;
	cout << "Enter Array Length :- ";
	cin >> n;
	
	int a[n];
	for(i=0;i<n;i++)
	{
		cout << "Enter Number :- ";
		cin >> a[i];
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<=a[i];j++)
		{
			if(j*j == a[i])
			{
				cout << "Square Root is :- " << j << endl;
			}
		} 
	}
	
}
