//Michael Balsam 
//H.W  Programming assginment 7
// Class Cp2100 
#include <iostream>
using namespace std;

int main()
{
	int Number = 0;
	int Max_Num = 0;
	int Min_Num = 99999999;
	
	while (Number != -99)
	{
		cout << "Enter an integer (enter -99 to end the loop) ";
		cin >> Number;
		
		if(Number > Max_Num && Number != -99)
		{
			Max_Num = Number;
		}	
		else if (Number < Min_Num && Number != -99)
		{
			Min_Num = Number;
		}	
	}
	
	cout<<"The largest number entered is: "<< Max_Num << endl;
	cout<<"The Smallest number entered is: "<< Min_Num << endl;
	
	return 0;
}

