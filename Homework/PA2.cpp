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

int main()
{
	int array_size = 10000;
	int numbers[array_size];
	int temp = 0;
	bool swapflag;
	clock_t start, stop;  
    double duration;
	int choice;
	cout<<"Sorting Experiments\n";
	cout<<"Choice 1 to create a data set\n";
	cout<<"Choice 2 to run a test sort\n"; 
	cin>>choice;
	
	//create BestCase
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
		cout<<"How many numbers in worst case\n";
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
	//return to main after data input
  	return main();	
	}
	//choice which sort to use
	else if(choice == 2) 
	{
	cout<<"Test Run sort\n";
	cout<<"-----------------\n";
	cout<<"Choice 1 BubbleSort\n";
	cout<<"Choice 2 SelectionSort\n";
	cin>>choice;
	
	//choice which case for efficent bubble sort
	if(choice == 1)
	{
		cout<<"Choose the case\n";
		cout<<"Choice 1 best case bubble sort\n";
		cout<<"Choice 2 worst case bubble sort\n";
		cout<<"Choice 3 random case bubble sort\n";
		cin>>choice;
	
	//efficent bubble sort best case
	if(choice == 1)
	{
		string line;
		ifstream Myfile1 ("bestcase.txt");
		if(Myfile1.is_open())
		{
			for(int index = 1; index <= array_size; index++)
			while(Myfile1 >> numbers[index])
			{
				Myfile1 >> numbers[index];
			}
			Myfile1.close();
		}
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
	stop = clock();
    duration = ((double)(stop - start))/CLOCKS_PER_SEC;
    cout<<"\nEfficent bubble sort for best case took "<<setprecision(3)<<fixed<<duration<<" seconds!\n";
		}
		
	//efficent bubble sort worst case
	else if(choice == 2)
		{
    	string line;
		ifstream Myfile2 ("worst.txt");
		if(Myfile2.is_open())
		{
			for(int index = 1; index <= array_size; index++)
			while(Myfile2 >> numbers[index])
			{
				Myfile2 >> numbers[index];
			}
			Myfile2.close();
		}
		
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
	stop = clock();
    duration = ((double)(stop - start))/CLOCKS_PER_SEC;
    cout<<"\nEfficent bubble sort for worst case took "<<setprecision(3)<<fixed<<duration<<" seconds!\n";
	}
	
	//efficent bubble sort random case
	else if(choice == 3)
	{
		string line;
		ifstream Myfile3 ("random.txt");
		if(Myfile3.is_open())
		{
			for(int index = 1; index <= array_size; index++)
			while(Myfile3 >> numbers[index])
			{
				Myfile3 >> numbers[index];
			}
			Myfile3.close();
	 }
	
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
	stop = clock();
    duration = ((double)(stop - start))/CLOCKS_PER_SEC;
    cout<<"\nEfficent bubble sort for random case took "<<setprecision(3)<<fixed<<duration<<" seconds!\n";
	}
	else
  	return main();
		}
	
	//selection sort best case
	else if(choice == 2)
	{
	cout<<"Choose the case\n";
	cout<<"Choice 1 best case selection sort\n";
	cout<<"Choice 2 worst case selection sort\n";
	cout<<"Choice 3 random case selection sort\n";
	cin>>choice;
	
	//selection sort best case
	if(choice == 1)
	{
		string line;
		int min, temp; 
		ifstream Myfile1 ("bestcase.txt");
		if(Myfile1.is_open())
		{
			for(int index = 1; index <= array_size; index++)
			while(Myfile1 >> numbers[index])
			{
				Myfile1 >> numbers[index];
			}
			Myfile1.close();
		}
	start = clock();   
  	for (int i = 0; i < array_size-1; i++)  
   		{     
		min = i;     
   	for (int j = i+1; j < array_size; j++)    
	{     
	if (numbers[j] < numbers[min])         
		min = j;     
	}
			   
  	temp = numbers[array_size];   
  	numbers[array_size] = numbers[min];
	numbers[min] = temp;
		}	
	stop = clock();
    duration = ((double)(stop - start))/CLOCKS_PER_SEC;
    cout<<"\nSelection sort for best case took "<<setprecision(3)<<fixed<<duration<<" seconds!\n";
	}
	
	//slection sort worst case	
	else if(choice == 2)
	{
	string line;
	int min, temp; 
	ifstream Myfile2 ("worstcase.txt");
	if(Myfile2.is_open())
	{
		for(int index = 1; index <= array_size; index++)
		while(Myfile2 >> numbers[index])
		{
			Myfile2 >> numbers[index];
		}
		Myfile2.close();
	}
	start = clock();   
  	for (int i = 0; i < array_size-1; i++)  
   		{     
		min = i;     
   	for (int j = i+1; j < array_size; j++)    
	{     
	if (numbers[j] < numbers[min])         
		min = j;     
	}
			   
  	temp = numbers[array_size];   
  	numbers[array_size] = numbers[min];
	numbers[min] = temp;
		}	
	stop = clock();
    duration = ((double)(stop - start))/CLOCKS_PER_SEC;
    cout<<"\nSelection sort for worst case took "<<setprecision(3)<<fixed<<duration<<" seconds!\n";
	}
	
	//selection sort random case	
	else if(choice == 3)
	{
	string line;
	int min, temp; 
	ifstream Myfile3 ("randomcase.txt");
	if(Myfile3.is_open())
	{
		for(int index = 1; index <= array_size; index++)
		while(Myfile3 >> numbers[index])
		{
			Myfile3 >> numbers[index];
		}
		Myfile3.close();
	}
	start = clock();   
  	for (int i = 0; i < array_size-1; i++)  
   		{     
		min = i;     
   	for (int j = i+1; j < array_size; j++)    
	{     
	if (numbers[j] < numbers[min])         
		min = j;     
	}
			   
  	temp = numbers[array_size];   
  	numbers[array_size] = numbers[min];
	numbers[min] = temp;
		}	
	stop = clock();
    duration = ((double)(stop - start))/CLOCKS_PER_SEC;
    cout<<"\nSelection sort for random case took "<<setprecision(3)<<fixed<<duration<<" seconds!\n";
	}	
			
	}
	else 
	return main();
	}
}
	
