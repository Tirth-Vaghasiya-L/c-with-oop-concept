#include<iostream>
using namespace std;

int main() 
{
	int a;
	
	cout << "Enter Your Age: ";
	cin  >> a;
	
	try
	{
		if(a<18) 
		{
			throw a;
		}
		else 
		{			
			cout << "You Are Eligible For Voting" << endl;
		}
	}
	catch(int n)
	{
		cout << "You Can Vote After " << 18-n << " Years" << endl;
	}

	
	catch(...) 
	{
		cout << "Please Enter Your Age !!" << endl;
	}
	
	cout << "THE END !!" << endl;
	
}