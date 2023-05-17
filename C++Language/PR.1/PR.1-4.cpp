#include<iostream>
using namespace std;

int main()
{
	char a;
	cout << " Enter any letter :- ";
	cin >> a;
	
	if (a =='a' || a =='A' || a =='e' || a =='E' || a =='i'|| a =='I' || a =='o' || a =='O' || a =='u'|| a =='U')
    {
        cout << "This letter is vowel";
    }
    
    else
    {
        cout << "This letter is consonant";
    }
}
