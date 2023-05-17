#include<iostream>
using namespace std;

int avg(int a,int x)
{
  	cout << "Average :- " << a+x/2 << endl;
}

int sum(int a,int x)
{
  	cout << "Sum :- " << a+x << endl;
}

int main()
{
	avg(sum(2,5),2);				
}


