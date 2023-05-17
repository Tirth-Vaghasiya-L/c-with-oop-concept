#include<iostream>
using namespace std;

int exit()
{
	
}

int sum()
{
	system("cls");
	int a,b;
	cout << "Enter Value One :-";
	cin >> a;
	cout << "Enter Value Two :-";
	cin >> b;
	
	cout << "Addition Of " << a << " & " << b << " Is " << a+b << endl;
}
int sub()
{
	system("cls");
	int a,b;
	cout << "Enter Value One :-";
	cin >> a;
	cout << "Enter Value Two :-";
	cin >> b;
	
	cout << "Subtration Of " << a << " & " << b << " Is " << a-b << endl;
}
int div()
{
	system("cls");
	int a,b;
	cout << "Enter Value One :-";
	cin >> a;
	cout << "Enter Value Two :-";
	cin >> b;
	
	cout << "Division Of " << a << " & " << b << " Is " << a/b << endl;
}
int mul()
{
	system("cls");
	int a,b;
	cout << "Enter Value One :-";
	cin >> a;
	cout << "Enter Value Two :-";
	cin >> b;
	
	cout << "Multiplicaton Of " << a << " & " << b << " Is " << a*b << endl;
}
int mod()
{
	system("cls");
	int a,b;
	cout << "Enter Value One :-";
	cin >> a;
	cout << "Enter Value Two :-";
	cin >> b;
	
	cout << "Modulation Of " << a << " & " << b << " Is " << a%b << endl;
}

int main()
{
	char choice;
	do
	{
		cout << "Enter 0 For Addition " << endl
		 << "Enter 2 For Subtraction " << endl
		 << "Enter 3 For Division " << endl
		 << "Enter 4 For Multiplication " << endl
		 << "Enter 5 For Modulation " << endl;
		cin >> choice;
	
		switch(choice)
		{
			case '1':
				sum();
				break;
			case '2':
				sub();
				break;
			case '3':
				div();
				break;
			case '4':
				mul();
				break;
			case '5':
				mod();	
				break;
			case '0':
				break;
			default:
				system("cls");
				cout << "Enter Valid Option" << endl;
				break; 	
		}
		cout << "------------------------------------" << endl;
	}
	while(choice != 0);
}


