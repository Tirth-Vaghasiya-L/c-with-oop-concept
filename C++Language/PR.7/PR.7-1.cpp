#include<iostream>
using namespace std;

class manager
{
	private:
		string email;
		string psw;
	public:
		manager()
		{
			email = "admin@gmail.com";
			psw = "admin@123";
		}
		
		virtual void emp() = 0;
		
		bool signin(string email,string psw)
		{
			if(this->email == email && this->psw == psw)
			{
				cout << "Login Succesfully !!!" << endl;
				return true;
			}
			else
			{
				cout << "ERROR : Login Failed !!!" << endl;
				return false;
			}
		}			
};

class employee : public manager
{
	private:
		string email,psw;
		bool login;
		int id;
		string name;
	public:
		void emp()
		{
			cout << "Start Entering Employee" << endl;
		}
		
		void setdata()
		{
			cout << "Enter Email :- ";
			cin >> email;
			cout << "Enter Password :- ";
			cin >> psw;
			login = signin(email,psw);
			if(login)
			{		
				system("cls");
				cout << "Enter Id :- ";
				cin >> id;
				cout << "Enter Name :- ";
				cin >> name;
			}
			else
			{
				cout << "ERROR : Login Failed !!!" << endl;
			}
		}
		void getdata()
		{
			cout << "Employee's Id :- " << id << endl;
			cout << "Employee's Name :- " << name << endl;
		}		
};

int main()
{
	employee e;
	
	e.setdata();
	e.getdata();
}
