#include<iostream>
using namespace std;

class math
{
	private:
		string email;
		string psw;
	public:
		math()
		{
			email = "admin@gmail.com";
			psw = "admin@123";
		}
		
		virtual void calculate() = 0;
		
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

class sum : public math
{
	private:
		string email,psw;
		bool login;
		int a,b,choice;
	public:
		void calculate()
		{
			cout << "Start Calculation" << endl;
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
				cout << "Press 1 to Find Area Of Triangle " << endl;
				cout << "Press 2 To Find Area Of Rectangle " << endl;
				cout << "Press 3 To Find Area Of Circle " << endl;
				cin >> choice;
				
				switch(choice)
				{
					case 1:
						system("cls");
						cout << "Enter Base :- ";
						cin >> a;
						cout << "Enter Height :- ";
						cin >> b;						
						cout << "Area Of Triangle :- " << a*b/2 << endl;
						break;
						
					case 2:	
						system("cls");
						cout << "Enter Width :- ";
						cin >> a;
						cout << "Enter Length :- ";
						cin >> b;						
						cout << "Area Of Rectangle :- " << a*b << endl;
						break;
					
					case 3:
						system("cls");
						cout << "Enter Radius :- ";
						cin >> a;						
						cout << "Area Of Circle :- " << 3.14*a*a << endl;
						break;
				}
			}
			else
			{
				cout << "ERROR : Login Failed !!!" << endl;
			}
		}
		
		
};

int main()
{
	sum s;
	
	s.setdata();
}
