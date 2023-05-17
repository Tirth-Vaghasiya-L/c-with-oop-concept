#include<iostream>
using namespace std;

class add
{
	private:
		int a;
	public:
		add()
		{
			
		}
		add(int a)
		{
			this->a = a;
		}
	
		add operator+(add d)
		{
			add tmp;	
			tmp.a = a + d.a;	
			return tmp;
		}
		
		void getdata()
		{
			cout << "Addition :- " << a;
		}
};

int main()
{
	
	add a1(50);
	add a2(10);
	add a3;
	
	a3 = a1 + a2;
	a3.getdata();
}
