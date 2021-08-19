//iterative recursion
#include <iostream>
using namespace std;

int main()
{
	int num;
	int factorial = 1;
	cout<<"Enter number";
	cin>>num;
	cout<<"\n"<< num<<"!= ";
	
	while (num > 1)
	{
		factorial = factorial * num;
		num--;
	}
	cout<<factorial<<"\n\n";
}
