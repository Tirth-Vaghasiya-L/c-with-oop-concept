#include<iostream>
using namespace std;

int fact(int x)
{
	cout << "Table Of " << x  << " =" << endl;
	
	cout << x << " * 1 = " << x*1 << endl;
	cout << x << " * 2 = " << x*2 << endl;
	cout << x << " * 3 = " << x*3 << endl;
	cout << x << " * 4 = " << x*4 << endl;
	cout << x << " * 5 = " << x*5 << endl;
	cout << x << " * 6 = " << x*6 << endl;
	cout << x << " * 7 = " << x*7 << endl;
	cout << x << " * 8 = " << x*8 << endl;
	cout << x << " * 9 = " << x*9 << endl;
	cout << x << " * 10 = " << x*10 << endl; 
}


int main()
{
	int n;
	
	cout << "Enter Number :- ";
	cin >> n;
	
	fact(n);				
}


