#include<iostream>
using namespace std;

int main() 
{
	int a,b;
	
	cout << "Enter A: ";
	cin  >> a;
	cout << "Enter B: ";
	cin  >> b;
	
	try
	{
		if(b==0) 
		{
			throw b;
		}
		else 
		{			
			cout << "Answer: " << (double)a/(double)b << endl;
		}
	}
	catch(int n)
	{
		cout << "Cannot Divide By " << n << endl;
	}

	
	catch(...) 
	{
		cout << "Please Try Again !!" << endl;
	}
	
	cout << "THE END !!" << endl;
	
}