#include<iostream>
using namespace std;

class a
{
	public:
		virtual void geta()
		{
				cout << "Class A" << endl;			
		}		
};

class b : virtual public a
{
	public:
		void getb()
		{
				cout << "Class B " << endl;
		}
				
};

class c : virtual public a
{
	public:
		void getc()
		{
			cout << "Class C " << endl;
		}				
};

class d : public b,public c
{
	public:
		void getd()
		{			
			cout << "Class D " << endl;	
		}
				
};

int main()
{
	d d1;
	d1.geta();
	d1.getb();
	d1.getc();
	d1.getd();
}
