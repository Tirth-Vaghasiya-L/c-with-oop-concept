#include<iostream>
using namespace std;

class math
{
	private:
		int a;
		int b;
	public:
		void setdata()
		{
			cout << "Enter First Value :- ";
			cin >> a;
			cout << "Enter Second Value :- ";
			cin >> b;
			try
			{
				if(b==0)
				{
					throw b;
				}
			}
			catch(int c)
			{
				cout << "Try Again And Dont'Enter " << c << endl;
			}
		}
		void getdata()
		{
			cout << "First Value :- " << a << " Is Divided By Second Value :- " << b << "   And It's Answer = " << a/b << endl;
		}
};

int main()
{
	math m;
	m.setdata();
	m.getdata();
}
