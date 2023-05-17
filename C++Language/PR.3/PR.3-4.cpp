#include<iostream>
using namespace std;

class house
{
	private:
		int height,height1;
		int width,width1;
		string colour,colour1;
	public:
		void setdata()
		{
			cout << "Enter Height Of House :- " ;
			cin >> height;
			cout << "Enter Height Of Room :- ";
			cin >> height1;
			cout << "Enter Width Of House :- ";
			cin >> width;
			cout << "Enter Width Of Room :- ";
			cin >> width1;
			cout << "Enter Colour Of House :- ";
			cin >> colour;
			cout << "Enter Colour Of Room :- ";
			cin >> colour1;
		}
		void getdata()
		{
			cout << endl << "Height Of House :- " << height << endl;
			cout << "Width Of House :- " << width << endl;
			cout << "Colour Of House :- " << colour << endl << endl;
			cout << "Height Of Room :- " << height1 << endl;
			cout << "Width Of Room :- " << width1 << endl;
			cout << "Colour Of Room :- " << colour1 << endl;
		}
};

int main()
{
	house h;
	h.setdata();
	h.getdata();
}
