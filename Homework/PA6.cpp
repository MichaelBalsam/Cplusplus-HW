//Michael Balsam 
//H.W  Programming assginment 6
// Class Cp2100 

#include <iostream>
#include <string>
using namespace std;

int main()
{
	double unitsold;
	const double retail = 99;
	double totalcost;
	
	cout << "How many units sold? ";
	cin >> unitsold;
	
	if (unitsold > 0)
	{
	
		if (unitsold >= 10 && unitsold <= 19)
		{
			totalcost = retail * unitsold - (retail * unitsold * 0.2);
			cout << "Total cost is: " << totalcost << endl;
		}
		else if (unitsold >= 20 && unitsold <= 49)
		{
			totalcost = retail * unitsold - (retail * unitsold * 0.3);
			cout << "Total cost is: " << totalcost << endl;
		}
		else if (unitsold >= 50 && unitsold <= 99)
		{
			totalcost = retail * unitsold - (retail * unitsold * 0.4);
			cout << "Total cost is: " << totalcost << endl;
		}
		else if (unitsold >= 100)
		{
			totalcost = retail * unitsold - (retail * unitsold * 0.5);
			cout << "Total cost is: " << totalcost << endl;
		}
		else if (unitsold >=1 && unitsold < 10)
		{
			totalcost = retail * unitsold;
			cout << "Total cost is: " << totalcost << endl;	
		}
	}
	else
	{
		cout << "Invalid number of units sold. Enter a number greater than 0";
	}
	return 0;
}
