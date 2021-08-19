#include <iostream>
using namespace std;

int NumAboveAverage(int [], int);
double Average(int [], int);
int NumAbove(int [], int, double);

int main()
{
	int const ArraySize = 25;
	int Scores[ArraySize];
	
	for(int i = 0; i < ArraySize; i++)
	{
		cout<<"Enter 25 exam scores"<<i+1 <<":";
		cin>>Scores[i];
		while(Scores[i] > 100 || Scores[i] < 0)
		{
			cout<<"Invalid input enter a score between 0 and 100 "<< i+1 << ": ";
			cin>>Scores[i];
		}
	}	
		cout<<"There are "<< NumAboveAverage(Scores, ArraySize)
		<<" students above the average"<<endl;
	return 0;
}
int NumAboveAverage(int array[], int size)
{    
 	double ave = Average(array,size);
	return NumAbove(array,size,ave);		
}

double Average(int array[], int s)
{
	double sum = 0;
	for(int i = 0; i < s; i++)
		sum += array[i];
	return sum / s;
}

int NumAbove(int array[], int s, double ave)
{
	int count = 0;
	for(int i = 0; i < s; i++)
		if(array[i] > ave)
			count++;
			return count;
}

