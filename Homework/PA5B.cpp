#include <iostream>
using namespace std;

bool isleapyear(int);

int main()
{
	int year;
	cout<< "Please enter a year";
	cin>> year;
	if(isleapyear(year))
		cout<<"this is a leap year"<< endl;
	else 
		cout<<"this is not a leap year"<<endl;
	return 0;
}

bool isleapyear(int y)
{
	bool result;
	if(y%400==0)
		result = true;
	else if(y%100 !=0 && y%4 ==0)
		result = true;
	else 
		result = false;
	return result;
}
