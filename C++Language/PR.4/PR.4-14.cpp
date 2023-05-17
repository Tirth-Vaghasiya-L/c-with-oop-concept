/*14. WAP to make Supermarket Billing System.
Requirements:
(A) Verify User Id And Password
(B) User Input Item Number , Item Name , Quantity , Tax , Discount.
(C) Display All Record In Ascending order (by item Number*/
#include<iostream>
using namespace std;

class market
{
	private:
		int number;
		string name;
		int quantity;
		int tax;
		int discount;
	public:
		void setdata()
		{
			cout << "Enter item number :-";
			cin >> number;
			cout << "Enter item name :-";
			cin >> name;
			cout << "Enter item quantity :-";
			cin >> quantity;
			cout << "Enter item tax :-";
			cin >> tax;
			cout << "Enter item discount :-";
			cin >> discount;	
		}
		
		void getdata()
		{
			cout << number << "\t" << name << "\t"  << quantity << "\t"  << tax << "\t"  << discount << "\t"  << endl;
		}
		
		friend void tirth(market[],int);
};

void tirth(market m[],int n)
{
	market temp;
	for(int i = 0;i<n;i++)
	{
		for(int j = i+1; j<n;j++)
		{
			if(m[i].number < m[j].number)
			{
				temp = m[i];
				m[i] = m[j];
				m[j] = temp;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		m[i].getdata();
	}
}

int main()
{
	int id;
	int password;
	int id1;
	int password1;
	cout << "Enter Your Id :-";
	cin >> id;
	cout << "Enter Your Password :-";
	cin >> password;
	system("cls");
	cout << "Verify Your Id :-";
	cin >> id1;
	cout << "Verify Your Password :-";
	cin >> password1;
	if(id==id1 && password==password1)
	{
		system("cls");
		cout << "\t\t\t\t  --------------------------------------------------------" << endl;
		cout << "\t\t\t\t\t\t Signed In Successfully !!" << endl;
		cout << "\t\t\t\t  --------------------------------------------------------" << endl << endl;
	}
	
	int n;
	cout << "Enter length :-";
	cin >> n;
	market m[n];
	
	
	
	for(int i =0;i<n;i++)
	{
		m[i].setdata();
	}
	tirth(m,n);
}
