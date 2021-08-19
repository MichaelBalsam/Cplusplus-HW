//CS 13 Exception Handling
#include<iostream>
#include<string>
#include<math.h>
#include<cstdlib>
#include<iomanip>
using namespace std;

double divide(int, int);

int main()
{
	double num1, num2;
	double quotient;
	cout<<"\n Type two number to check division  ";
	cin>>num1 >> num2;
	
	try
	{
		quotient=divide(num1,num2);
		cout<<"\n The quotient is "<<quotient; 	
	}
	
	
	catch(string error) 
	{
		cout<<error;
		return 0;
	}
	
	
	cout<<"\n The end";
	
	
	cout<<"\n\n";
	system("pause");
	return 0;
}

double divide(int numerator, int denominator)
{
	
if(denominator == 0) 
	{
		string error= "Error: cannot divide by zero\n";
		throw error;
	}
	return static_cast<double>(numerator / denominator);
}

