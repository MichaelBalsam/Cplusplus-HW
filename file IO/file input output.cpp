// basic file operations
#include <iostream>
#include <fstream>
using namespace std;

int main () 
{
 ofstream myfile;                         // this is how it will be called 
  myfile.open ("myoutput.txt");             //how the file looks to windows  // , ios::app appends file without deleting old infromation 
  myfile << "1234567,\n"; 
  for(int x = 1; x <= 10; x++) myfile << x << endl;   
  myfile.close();
  return 0;
}
