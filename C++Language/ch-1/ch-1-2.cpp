#include<iostream>
using namespace std;

int main()
{
	int i;
	char toggle[100];
	cout << " Enter String :- ";
	cin >>  toggle;
	
	for(i=0;toggle[i];i++)  
    {
        if(toggle[i] >= 65 && toggle[i] <= 90)
        {
        	toggle[i] += 32;        	      	
		}
		else if(toggle[i] >= 97 && toggle[i] <= 122)
        	{
        		toggle[i] -= 32;
			} 
        
 	}
 	cout << " Toggeled string :- " << toggle;
}
