//Michael Balsam 
//Class CP2200
//Assignment PA1
#include <iostream>
#include <fstream>
#include <string>
#include<iomanip>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
	char again = 'Y';
	while(again == 'y' || again == 'Y')
	{	
	int option;
	cout<<"Enter 1 leads to the text file menu "<<endl;
	cout<<"Enter 2 leads to sorting methods "<<endl;
	cin>>option;

		if(option == 1)	
{
		cout<<"Enter 3 for best case"<<endl;
		cout<<"Enter 4 for worst case"<<endl;
		cout<<"Enter 5 for average case"<<endl;
		cin>>option;
}
		if(option == 3)
		{
	    ofstream myfile;                         
  	    myfile.open ("best.txt");              
  	    for(int x = 1; x <= 10; x++) myfile << x << endl;   
 	    myfile.close(); 
			
	{
	string line;
  	ifstream myfile ("best.txt");
  		if (myfile.is_open())
  		{
    		while ( getline (myfile,line) )     
    	{
      		cout << line << '\n';           
    	}
    	myfile.close();                
  		}
  	}
}
	
		if(option == 4)
		{
		ofstream myfile;                         
  	    myfile.open ("worst.txt");                                     
  	    for(int x = 10; x >= 1; x--) myfile << x << endl;   
 	    myfile.close(); 
		
	{
	string line;
 	ifstream myfile ("worst.txt");
  		if (myfile.is_open())
  		{
    	while ( getline (myfile,line) )     
    	{
      		cout << line << '\n';             
    	}
    	myfile.close();                
    	}
	}
}
   	
		if(option == 5)
	{
	int Value;
	double Average, Sum = 0;
	int ArraySize = 5;
	int Numbers[ArraySize];
		
	{	
		ofstream myfile;                         
  	    myfile.open ("Average.txt");  
	   for(int i = 0; i < ArraySize; i++)
    	{
       cout << "Enter any 5 integers: ";
       cin >> Numbers[i];
		}
		
		for(Value = 0; Value < ArraySize; Value++)
			Sum += Numbers[Value];
		Average = Sum / ArraySize;
		cout<<"The average is: "<< Average;
	}
    	
		string line;
 		ifstream myfile ("Average.txt");
  		if (myfile.is_open())
  		{
    	while ( getline (myfile,line) )     
    		{
      		cout << line << '\n';             
    		}
    	myfile.close();                
    	}
    }	
		
	if(option == 2)
	{
		cout<<"Enter 6 for plain bubble sort"<<endl;
		cout<<"Enter 7 for Efficient bubble sort"<<endl;
		cin>>option;
		
		if(option == 6)
		{
		int temp = 0;
		int arraysize = 5;
		int numbers [arraysize];
	
		for(int i = 1; i <= arraysize; i++)
		{
		cout<< "Enter numbers into the array" << i+0 << ": ";
		cin >> numbers[i];
		cout<< " ";
		}
		for(int pass = 1; pass <= arraysize; pass++)
		for (int index = 0; index <= arraysize-1; index++)
			if(numbers[index] > numbers[index+1])
			{
				temp = numbers[index];
				numbers[index] = numbers[index+1];
				numbers[index+1] = temp;
			}
			cout<<"\nsorted numbers: ";
			for(int i= 1; i <= arraysize; i++)
			cout<<numbers[i] << " ";
		}
		
		if(option == 7)
		{
		clock_t start, stop;  
    	double duration;
    	start = clock() ;
		int temp = 0;
		int arraysize = 5;
		int numbers [arraysize];
	
		for(int i = 1; i <= arraysize; i++)
		{
		cout<< "Enter numbers into the array" << i+0 << ": ";
		cin >> numbers[i];
		cout<< " ";
		}
		for(int pass = 1; pass <= arraysize; pass++)
		for (int index = 0; index <= arraysize-1; index++)
			if(numbers[index] > numbers[index+1])
			{
				temp = numbers[index];
				numbers[index] = numbers[index+1];
				numbers[index+1] = temp;
			}
			cout<<"\nsorted numbers: ";
			for(int i= 1; i <= arraysize; i++)
			cout<<numbers[i] << " ";
			
   	stop = clock();
    duration = ((double)(stop - start))/CLOCKS_PER_SEC;
    cout<<"\nThat took "<<setprecision(3)<<fixed<<duration<<" seconds!\n";
	}
}
	cout<<"\nEnter y or Y to return to main menu ";
	cin>>again;
}
	cout<<"The end";
	return 0;
}

