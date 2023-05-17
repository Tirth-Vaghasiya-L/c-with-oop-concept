#include<iostream>
using namespace std;

class math
{
	public:
		void add()
		{
			cout << "Kuchh Daalo" << endl;
		}
		
		void add(int a)
		{
			cout << a << endl;
		}
		
		void add(int a,int b)
		{
			cout << "Add :- " << a+b << endl;
		}
		
		void add(int a,int b,int c)
		{
			cout << "Add :- " << a+b+c << endl;
		}
};

int main()
{
	math m;
	
	m.add();
	m.add(1);
	m.add(1,2);
	m.add(1,2,3);
}
