#include<iostream>
using namespace std;

int main() 
{
	char a[10];
	int upr = 0;
	
	cout << "Enter Your Password: ";
	cin  >> a;
	
	
	for(int i=0;i<strlen(a);i++)
	{
		if(a[i]>=65 && a[i]<=90)
		{
			upr++;
		}
	}
	
	try
	{
		if(upr>0) 
		{
			throw a;
		}
		else 
		{			
			cout << "Password Is Not Strong" << endl;
		}
	}
	
	catch(char n[10])
	{
		cout << "Password Is Strong Enough" << endl;
	}

	
	catch(...) 
	{
		cout << "Please Try Again !!" << endl;
	}
	
	cout << "THE END !!" << endl;
	
}