//Factorial recursion
#include <iostream>
using namespace std;

int factorial(int);

int main()
{
	int num;
	cout<<"Enter number";
	cin>>num;
	cout<<"\n"<< num<<"!= "<<factorial(num)<<"\n\n";
	return 0;
}
	
int factorial(int x)
{
	int value;
	if(x<=1)
	value =1;
	else value = x * factorial(x-1);
	return value;
}



