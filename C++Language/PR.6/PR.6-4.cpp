#include<iostream>
using namespace std;

class market
{
	private:
		static int id;
		string name;
		int age;
	public:
		void setdata()
		{
			cout << "Enter Name :- ";
			cin >> name;
			cout << "Enter Age :- ";
			cin >> age;
		}
		
		static void header()
		{
			cout << "Id\tName\tAge" << endl;
		}
		
		void getdata()
		{
			cout << id << "\t" << name << "\t" << age << endl;
			++id;
		}
		
		void operator++()
		{
			++age;
		}
		
		void operator--()
		{
			--age;
		}
};

int market::id = 101;

int main()
{
	int n;
	cout << "Enter Number Of Student :-";
	cin >> n;
	
	market m[n];
	
	for(int i = 0;i<n;i++)
	{
		m[i].setdata();
	}
	
	int a;
	
	cout << "Enter Number To Add Age :- ";
	cin >> a;
	
	++m[a];
	
	cout << "Enter Number To Subtract Age :- ";
	cin >> a;
	
	--m[a];
	
	
	
	market::header();
	
	for(int i = 0;i<n;i++)
	{
		m[i].getdata();
	}
}
