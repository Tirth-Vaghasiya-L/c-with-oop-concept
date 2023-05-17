#include<iostream>
using namespace std;

class add
{
	private:
		int feet;
		int feet1;
	public:	
		add()
		{
			cout << "Enter feet :-";
			cin >> feet;
			cout << "Enter feet :-";
			cin >> feet1;
		}
	
		add operator+(add d)
		{
			add tmp;	
			tmp.feet = feet + d.feet1;	
			return tmp;
		}
		
		void getdata()
		{
			cout << "Addition :- " << feet;
		}
};

int main()
{
	
	add a1;
	add a2;
	add a3;
	
	
	a3 = a1 + a2;
	a3.getdata();
}
