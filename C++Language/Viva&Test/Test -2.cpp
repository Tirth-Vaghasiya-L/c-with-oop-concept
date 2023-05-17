#include<iostream>
using namespace std;

class bank
{
	private:
		int number;
		string name;
		string type;
		string branch;
		int balance;
	public:
		void setdata()
		{
			cout << "Enter Account number :-";
			cin >> number;
			cout << "Enter Account Name :-";
			cin >> name;
			cout << "Enter Account Type :-";
			cin >> type;
			cout << "Enter Branch Name :-";
			cin >> branch;
			cout << "Enter Balance :-";
			cin >> balance;	
		}
		
		void getdata()
		{
			cout << number << "\t" << name << "\t"  << type << "\t"  << branch << "\t"  << balance << "\t"  << endl;
		}
		
		
		friend void tirth(bank[],int);
};

void tirth(bank b[],int n)
{
	system("cls");
	int numb;
	cout << "Enter Account Number To See Account Details :- ";
	cin >> numb;

	bank c[n];
	
	for(int i=0;i<n;i++)
	{
		if(b[i].number == numb)
		{
			b[i].getdata();
		}
	}
}

int main()
{	
	int n;
	cout << "Enter length :-";
	cin >> n;
	bank b[n];

	
	for(int i=0;i<n;i++)
	{
		b[i].setdata();
	}
	tirth(b,n);
}
