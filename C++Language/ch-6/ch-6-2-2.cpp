#include<iostream>
using namespace std;

class a
{
	protected:
		int a1;
	public:
		a()
		{
				cout << "Enter A :- ";
				cin >> a1;			
		}		
};

class b : public a
{
	protected:
		int b1;
	public:
		b():a()
		{
				cout << "Enter B :- ";
				cin >> b1;
		}
				
};

class c : public a
{
	protected:
		int c1;
	public:
		c():a()
		{
			cout << "Enter C :- ";
			cin >> c1;
		}				
};

class d : public b,public c
{
	protected:
		int d1;
	public:
		d():b(),c()
		{			
				cout << "Enter D :- ";
				cin >> d1;
				cout << "Sum of this number = " << b::a1+b1+c1+d1;
			
		}
				
};

int main()
{
	d d1;
}
