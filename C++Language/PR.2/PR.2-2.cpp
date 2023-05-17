#include<iostream>
using namespace std;
int main()
{
	int a[10],b[10],c[10],i,n;
	
	cout << "Enter Length Of Array :- ";
	cin >> n;
	
	cout << "Enter First array->";
	for (i=0;i<n;i++)
	{
		cin >> a[i];
	}
	cout << "Enter Second array->";
	for (i=0;i<n;i++)
	{
		cin >> b[i];
	}
	
	cout << "Arrays before swapping" << endl;
	cout << "First array->";
	
	for (i=0;i<n;i++) 
	{
		cout << a[i] << endl;
	}
	
	cout << "Second array->";
	
	for (i=0;i<n;i++)
	{
		cout << b[i] << endl;
	}
	
	for (i=0;i<n;i++) 
	{
		c[i]=a[i];
		a[i]=b[i];
		b[i]=c[i];
	}
	
	cout << "Arrays after swapping" << endl;
	cout << "First array->";
	
	for (i=0;i<n;i++) {
		cout << a[i] << endl;
	}
	
	cout << "Second array->";
	for (i=0;i<n;i++) 
	{
		cout << b[i] << endl;
	}
	return 0;
}
