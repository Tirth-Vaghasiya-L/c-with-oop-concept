#include<iostream>
using namespace std;

class description
{
	private :
		int gr;
		string name;
		string course;
		int study;
		int age;
	public:
		void setdata()
		{
			cout << "Enter Your GR_ID :- ";
			cin >> gr;
			cout << "Enter Your Name :- ";
			cin >> name;
			cout << "Enter Your Course :- ";
			cin >> course;
			cout << "Enter Your Standard :- ";
			cin >> study;
			cout << "Enter Your Age :- ";
			cin >> age;
		}
		
		void getdata()
		{
			cout << endl << "HI !!! My Name Is " << name << " My GR_ID Is " << gr << " My Course Is " << course << " I Am Studing In " << study << " My Age Is "  << age <<endl; 
		}
};

int main()
{
	description d;
	d.setdata();
	d.getdata();
}
