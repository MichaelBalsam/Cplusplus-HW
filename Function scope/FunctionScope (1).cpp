#include <iostream>
using namespace std;

void OneTypeOfFunction(int, int);
void AnotherTypeOfFunction(int&, int);

int globalThing = 20;

int main ()
{
	int Avariable = 5, Bvariable = 10 , globalThing = 15 ;
	
    cout << "Main Program is now starting." << endl
         << "Avariable: " << Avariable << endl 
         << "Bvariable: " << Bvariable << endl
         << "globalThing: " << globalThing << endl ;
	
    OneTypeOfFunction(Avariable, Bvariable);	

    cout << "Back in main:" << endl;
    cout << "Avariable: " << Avariable << endl 
         << "Bvariable: "<< Bvariable << endl
	     << "globalThing: " << globalThing << endl ;

    AnotherTypeOfFunction(Avariable, Bvariable);
    
    cout << "Back in main:" << endl
         << "Avariable: " << Avariable << endl 
         << "Bvariable: " << Bvariable << endl;
         
    globalThing = Avariable + Bvariable ;	
    
    cout << "globalThing: " << :: globalThing << endl
         << "globalThing: " << globalThing << endl;
    
	
	return 0;
}


void OneTypeOfFunction(int Cvariable , int globalThing)
{
	cout << "In OneTypeOfFunction:" << endl;
    cout << "globalThing: " << globalThing << endl;
    cout << "Cvariable: " << Cvariable << endl 
         << "globalThing: " <<globalThing << endl;

	Cvariable = Cvariable + globalThing;

    cout << "Cvariable: " << Cvariable << endl 
         << "globalThing: " << globalThing << endl;

    globalThing=100;

    cout << "globalThing: " << globalThing << endl;
    cout << "globalThing: " << ::globalThing << endl; 
}


void AnotherTypeOfFunction(int& Cvariable, int Dvariable)
{
	cout << "In AnotherTypeOfFunction:" << endl
         << "globalThing: " << globalThing << endl
         << "Cvariable: " << Cvariable << endl 
         << "Dvariable: " <<Dvariable << endl;

	Cvariable = Cvariable + Dvariable ;

    cout << "Cvariable: " << Cvariable << endl 
         << "Dvariable: " << Dvariable << endl;
}


