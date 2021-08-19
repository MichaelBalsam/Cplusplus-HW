//Michael Balsam
//H.W  Programming assginment 8
// Class Cp2100 
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int Number;
	int RandomNumber = rand();
	int Number_Of_Guess = 0;
 	bool Guess = false;
	unsigned seed = time(0);
	
	srand(seed);

	cout<<" Enter an integer to guess the number: "<<endl;
	cin>> Number;
	
	while (!Guess)
	{
		if (Number > RandomNumber)
		{
			cout << "Too high. Try again."<<endl;
			cin  >> Number;
			Number_Of_Guess++;
		}
		
		else if (Number < RandomNumber)
		{
			cout << "Too low. Try again."<<endl;
			cin  >> Number;
			Number_Of_Guess++;
		}
		
		else
		{
			Number_Of_Guess++;
			cout << "It took you: " << Number_Of_Guess << " guesses "<<endl;
			Guess = true;	
		}

	}
	return 0;

}

