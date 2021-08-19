//Michael Balsam
//H.W  Programming assginment 4
// Class Cp2100 
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

int main()
{
	int MinValue = 1;
	int MaxValue = 6;
	int PlayerNum1;
	int PlayerNum2;
	
	unsigned seed =time(0);
	
	srand(seed);
	
	cout <<"let's play the dice game." << endl;
	PlayerNum1 = (rand() % (MaxValue - MinValue + 1)) + MinValue;
	PlayerNum2 = (rand() % (MaxValue - MinValue + 1)) + MinValue;
	
	cout <<"Press enter to roll the dice for PlayerNum1"; 
	cin.get();
	cout<<"PlayerNum1 got " << setw(2) << PlayerNum1;
	cin.get();
	cout <<"Press enter to roll the dice for PlayerNum2";
	cin.get();
	cout <<"PlayerNum2 got" << setw(2) << PlayerNum2 << endl;	
	
	if(PlayerNum1 > PlayerNum2)
	{
	cout <<"PlayerNum1 is the Winner" << endl;
	}
	
	else if(PlayerNum2 > PlayerNum1)
	{
	cout <<"PlayerNum2 is the Winner" << endl;
	}
	
	else(PlayerNum1 == PlayerNum2)
	{
	cout<<"PlayerNum1 and PlayerNum2 are tied" << endl;
	}
	return 0;
}


