#include<iostream>
using namespace std;

class measure
{
	private:
		int feet,feet1,feet2;
		int inch,inch1,inch2;
		int i = 59;
	public:
		void setdata()
		{
			cout << "Enter feet :- ";
			cin >> feet;
			cout << "Enter inch :- ";
			cin >> inch;
			cout << "Enter feet :- ";
			cin >> feet1;
			cout << "Enter inch :- ";
			cin >> inch1;
		}
		
		void getdata()
		{
			inch2 = inch + inch1;
			feet2 = feet + feet1;
			while(i<inch2)
			{
				inch2 = inch2-60;
				feet2++;	
			}
			
			cout << "Feet :- " << feet2 <<endl
				 << "Inch :- " << inch2 <<endl;
		}
		
};

int main()
{
	measure m;
	
	m.setdata();
	m.getdata();
}
