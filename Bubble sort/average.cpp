//reading a text file
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
  ofstream myfile;                        
  myfile.open ("average.txt");     

	int Value;
	double Average, Sum = 0;
	int ArraySize = 20;
	int Numbers[ArraySize];
	   
	   for(int i = 0; i < ArraySize; i++)
    {
       cout << "Enter any 20 integers: ";
       cin >> Numbers[i];
	}
		for(Value = 0; Value < ArraySize; Value++)
			Sum += Numbers[Value];
		Average = Sum / ArraySize;
		cout<<Average;
  myfile.close();                                  
  
  	{		
  string line;
  ifstream myfile ("average.txt");
  if (myfile.is_open())
  {
    while ( getline (myfile,line) )      
    {
      cout << line << '\n';             
  	}
    myfile.close();                
  }

  else cout << "Unable to open file"; 

	}
	return 0;
}
	
