//Michael Balsam 
//Class CP2200
//Assignment PA2
#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>
#include <string>
#include <iomanip>
using namespace std;

void sorting(int array[]);
int numbers = 10000;

int main()
{
	clock_t start, stop;  
    double duration;
	//create BestCase
	int choice;
	int list;
	if(choice == 1) {
	cout<<"Create a Data set\n";
	cout<<"-----------------\n";
	cout<<"Choice 1 BestCase\n";
	cout<<"Choice 2 WorstCase\n";
	cout<<"Choice 3 RandomCase\n";
	cout<<"Choice 4 quit\n";
	cin>>choice;
	
	if(choice == 1)
	{
		int numbers;
		ofstream Myfile1;
		Myfile1.open ("bestcase.txt");
		cout<<"How many numbers in best case\n";
		cin>>numbers;
		for(int i = 1; i <= numbers; i++) Myfile1 << i << endl;
		Myfile1.close();
	}
	
	//create WorstCase
	else if(choice == 2)
	{
		int numbers;
		ofstream Myfile2;
		Myfile2.open ("Worstcase.txt");
		cout<<"How many numbers in worst case/\n";
		cin>>numbers;
		for(int i = numbers; i >= 1; i--) Myfile2 << i << endl;
		Myfile2.close();
	}
	
	//create RandomcCase
	else if(choice == 3)
	{
		int numbers;
		ofstream Myfile3;
		Myfile3.open ("RandomData.txt");
		cout<<"How many random numbers/\n";
		cin>>numbers;
		srand(time(0));
		for(int i = numbers; i >= 1; i--) Myfile3 << rand()%100 << endl;
		Myfile3.close(); 
	}
	
	else if (choice == 4)
	{	
		return 0;
	}
		}
	
	if(choice == 1)
	{
		string line;
		cout<<"Efficent Bubble sort";
		ifstream Myfile1 ("bestcase.txt");
		if(Myfile1.is_open())
		for(int i=1;i<=numbers;i++)
			Myfile1>>list[i];
			start=clock();
			sorting(list);
			end=clock();
			duration=((double)(end-start))/CLOCKS_PER_SEC;	
			cout<<"\n\nElapsed seconds to produse sorted list= "<<setprecision(3)<<fixed<<duration<<" seconds\n"; 
    	return main()
		{
			Myfile1.close();
		}
	}
	void sorting(int array[])
	{
	int array_size = 10000;
	int numbers[array_size];
	int temp = 0;
	bool swapflag;
	start = clock();
	for(int pass = 1; pass <= array_size-1; pass++)
		{
	swapflag = 0;
		for (int index = 0; index < array_size-1; index++)
			if(numbers[index] > numbers[index+1])
			{
				swapflag = 1;
				temp = numbers[index];
				numbers[index] = numbers[index+1];
				numbers[index+1] = temp;
			}
	if(swapflag == 0)
	break;	
	}
	
	else
 	cout<<"\n\nIncorrect number. Try again\n\n";
 	return main();
}
	
