// reading a text file
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
  ofstream myfile;                         // this is how it will be called 
  myfile.open ("myoutput.txt");             //how the file looks to windows //opens file // , ios::app appends file without deleting old infromation 
  for(int x = 1; x <= 10; x++) myfile << x << endl;   
  myfile.close();                                   //closes file
  
  	{		
  string line;
  ifstream myfile ("myoutput.txt");
  if (myfile.is_open())
  {
    while ( getline (myfile,line) )      // reads whats in the file line by line and prints everything out as a string 
    {
      cout << line << '\n';             // output each line
    }
    myfile.close();                
  }

  else cout << "Unable to open file"; 

	}
	return 0;
}
	
