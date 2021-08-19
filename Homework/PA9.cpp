//Michael Balsam
//H.W  Programming assginment 9
// Class Cp2100 
#include <iostream>
using namespace std;

bool isPrime(int);

int main()
{
	int Value;
	
	cout<<"Enter an integer to test if it is a prime number"<<endl;
	cin>> Value;
	while(Value <= 1)
	{
	cout<<"Enter a number greater than 1 "<< endl;
		cin>>Value;
	}
	
	if(isPrime(Value))
		cout<< Value << " is a prime number "<<endl;
	else
		cout<< Value << " is not a prime number "<<endl;
	return 0;

}

bool isPrime(int number)
	{
	bool status;
	int i;
	
    	for (i = 2; i < number; i++)
     { 
	 if(number % i == 0)
     	return status = false;
    } 
     	return status = true; 
  }
		
		 

