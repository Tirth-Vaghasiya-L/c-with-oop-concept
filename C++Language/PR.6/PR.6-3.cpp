#include<iostream>
using namespace std;

class cricket
{
	protected:
		int overs = 50;
};

class t20 : public cricket
{
	public:
		void getTotalOvers()
		{
			cout << "Total overs :- " << overs - 30 << endl;
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
	t20 t1;
	TestMatch t2;
	
	t1.getTotalOvers();
	t2.getTotalOvers();
}
