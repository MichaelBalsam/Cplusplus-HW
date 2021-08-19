//Michael Balsam
//H.W  Programming assginment 10
// Class Cp2100 
#include <iostream>
using namespace std;

int main()
{
	int Value;
	double Average, Sum = 0;
	int Max_Num, Min_Num;
	const int ArraySize = 5;
	int Numbers[ArraySize];
	   
	   for(int i = 0; i < ArraySize; i++)
    {
       cout << "Enter any 20 integers: ";
       cin >> Numbers[i];
	}
	Max_Num = Numbers[0];
	Min_Num = Numbers[0];
		for(int i = 1; i < ArraySize; i++)
	{
		if(Min_Num > Numbers[i])
		{
			Min_Num = Numbers[i];
		}
		if(Max_Num < Numbers[i])
		{
			Max_Num = Numbers[i];
		}
	}
		for(Value = 0; Value < ArraySize; Value++)
			Sum += Numbers[Value];
		Average = Sum / ArraySize;
		
		cout<<"The largest number entered is: "<< Max_Num << endl;
		cout<<"The Smallest number entered is: "<< Min_Num << endl;	
		cout<<"The Average of the Array is: "<< Average<< endl;	
	
	return 0;
}


