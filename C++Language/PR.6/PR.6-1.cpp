#include<iostream>
using namespace std;

class message
{
	private:
		string mess;
	public:
		message()
		{
			cout << "Enter Any Thing :- ";
			cin >> mess;
		}
		
		void print()
		{
			cout << mess << endl;
		}
		
		void print(string mess2)
		{	
			cout << mess << "  " << mess2 << endl;
		}
};

int main()
{
	message m;
	
	m.print();
	m.print("World");
}
