#include<iostream>
using namespace std;

class time
{
	private:
		int hour,hour1,hour2;
		int min,min1,min2;
		int sec,sec1,sec2;
		int i = 59;
	public:
		void setdata()
		{
			cout << "Enter Hour :- ";
			cin >> hour;
			cout << "Enter Minute :- ";
			cin >> min;
			cout << "Enter Second :- ";
			cin >> sec;
			cout << "Enter Hour :- ";
			cin >> hour1;
			cout << "Enter Minute :- ";
			cin >> min1;
			cout << "Enter Second :- ";
			cin >> sec;
			
		}
		
		void getdata()
		{
			sec2 = sec + sec1;
			min2 = min + min1;
			hour2 = hour + hour1;
			while(i<sec2)
			{
				sec2 = sec2-60;
				min2++;	
			}
			
			while(i<min2)
			{
				min2 = min2-60;
				hour2++;
			}
			
			cout << "Hour :- " << hour2 <<endl
				 << "Minute :- " << min2 <<endl
				 << "Second :- " << sec2 << endl;
		}
		
};

int main()
{
	time t;
	t.setdata();
	t.getdata();
}
