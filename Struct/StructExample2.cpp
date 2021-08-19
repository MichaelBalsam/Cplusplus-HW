//Michael Balsam
//Class CP2200
#include <iostream>
using namespace std;

int main()
{
	struct Patient_Records
	{
		string FName;
		string LName;
		int Age;
		char Gender;
		string Condition;
	};
	int choice, count = 0;
	Patient_Records patient[1000];
	do
	{
		cout<<"Enter 1 to add new patient\n";
		cout<<"Enter 2 to print records\n";
		cout<<"Enter 3 to Exit \n";
		cout<<"\nEnter your choice ";
		cin>>choice;
			
		if(choice == 1)
		{
		count++;
		cout<<"\nPatients "<< count <<" First Name? ";
		cin>>patient[count].FName;
		cout<<"\nPatients "<< count <<" Last Name? ";
		cin>>patient[count].LName;
		cout<<"\npatients "<< count << " Age? ";
		cin>>patient[count].Age;
		cout<<"\nPatients "<< count << " Gender? ";
		cin>>patient[count].Gender;
		cout<<"\nPatients "<< count << " Condition? ";
		cin>>patient[count].Condition; 
		cout<<"\n\nThe record has updated \n\n";
		}	
		if(choice == 2)
		{
		cout<<"FName\tLName\tAge\tGender\tCondition\n ";
		for(int i = 1; i <= count; i++)
		{
			cout<<"\n\n";
			cout<<patient[i].FName;
			cout<<"\t"<<patient[i].LName;
			cout<<"\t"<<patient[i].Age;
			cout<<"\t"<<patient[i].Gender;
			cout<<"\t"<<patient[i].Condition;
			cout<<"\n\n";
		}
		}
	}while(choice != 3);

	cout<<"The End";
	return 0;
}
