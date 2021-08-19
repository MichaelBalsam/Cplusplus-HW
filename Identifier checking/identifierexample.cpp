#include <iostream>
#include <cString>
#include <cctype>
using namespace std;

int main()
{
	string identifier;
	while(true)
	{	
	bool valid = true;
	cout << "Enter a name for the identifier: ";
	getline(cin, identifier);
	for (int i = 0; i < identifier.length(); i++)
	{   
		if (isdigit(identifier[0]))
		    {cout<<"\nFirst character can't be numeric!";
			valid = false;}
		if (isspace(identifier[i]))
		    {cout<<"\nYou can't have a space !"; 
			 valid = false ;	}
		if (!isalnum(identifier[i]) && identifier[i] != 0x5f)
			{valid = false;
			 cout<<"\nYou can't use a "<<identifier[i];}
		if (!valid)
			break;
	}
	//0x5f is underscore
	if (valid)
		cout<<"\n"<<identifier<<" IS a valid identifier.\n\n";
	else
		cout<<"\n"<<identifier<<" is NOT a valid identifier.\n\n";
    }
	return 0;
}
