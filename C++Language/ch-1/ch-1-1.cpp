#include<iostream>
using namespace std;

int main()
{
	int n,i;
	cout << "Enter array size :-";
	cin >> n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cout << "Enter value :-";
		cin >> a[i];
		cout << "\n";
		
	}

	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			cout << "Even :" << a[i] << endl;
		}
	}
	
}

