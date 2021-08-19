#include <iostream>
#include <cmath>
using namespace std;

double BinarytoDecimal(int);

int main()
{
	cout<<BinarytoDecimal(101011)<<endl;	
	
	return 0;
} 

double BinarytoDecimal(int Number)
{
	int i = 0, result = 0, Digit;
	while(Number > 0)
	{
		Digit = Number % 10;
		result += Digit * pow(2 , i);
		i++;
		Number /= 10;
	} 
	return result;
}
