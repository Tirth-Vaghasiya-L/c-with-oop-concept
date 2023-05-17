#include<iostream>
using namespace std;

class cricket
{
	protected:
		int overs = 50;
	public:
		void getTotalOvers()
		{
			cout << "Total overs :- " << overs << endl;
		} 
};

class t20 : public cricket
{
	public:
		void getTotalOvers()
		{
			cout << "Total overs :- " << overs -30 << endl;
		} 
};

class TestMatch : public cricket
{
	public:
		void getTotalOvers()
		{
			cout << "Total overs :- " << overs << endl;
		} 
};


int main()
{
	TestMatch t1;
	
	t1.getTotalOvers();
}
