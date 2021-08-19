//Michael Balsam
//H.W  Programming assginment 11
// Class Cp2100 
#include <iostream>
using namespace std;

void showValues(const int [], int);
void showValues(const char [], int); 
void LetterGrade(const int [], char [], int);
double calcAverage(int[], int);

int main()
{

	const int ArraySize = 10;
	int Numbers[ArraySize];
	char Grade[ArraySize];
	for(int i = 0; i < ArraySize; i++)
	{
		cout <<"Enter 10 grades "<< i+1 << ": ";	
		cin >> Numbers[i];
	while(Numbers[i] < 0 || Numbers[i] > 100)
		{
		cout<<"Invalid input enter a number between 0 and 100 "<< i+1 << ": ";
		cin>>Numbers[i];
		}
	}
	LetterGrade(Numbers, Grade, ArraySize);
   	showValues(Numbers, ArraySize);
   	showValues(Grade, ArraySize);
   	calcAverage(Numbers, ArraySize);
	return 0;
}

void showValues(const int Num[], int Size)
{
   for (int i = 0; i < Size; i++)
      cout << Num[i] << " ";
	  cout << endl;
}

void showValues(const char G[], int Size)
{
   for (int i = 0; i < Size; i++)
      cout << G[i] << " ";
   cout << endl;
}
void LetterGrade(const int G[], char Letter[], int Size)	
{
	for(int i = 0; i < Size; i++)
	{
	if(G[i]>=90)
		Letter[i]='A';
	else if(G[i]>=80)
		Letter[i]='B';
	else if(G[i]>=70)
		Letter[i]='C';
	else if(G[i]>=60)
		Letter[i]='D';
	else
		Letter[i]='F';
	}
}

double calcAverage(int Numbers[], int Average)
{
	int lowest;
	int Sum = 0;
	for(int i = 0; i < Average; i++)
		Sum += Numbers[i];
    
	lowest = Numbers[0];
    for ( int i = 1; i < Average; i++)
    {
        if(Numbers[i] < lowest)
            lowest = Numbers[i];
	}
	Average = ((Sum) - lowest) / (Average-1);
	    cout<<"The Average of the grades is: " << Average<< endl;
		cout<<"The lowest number is: "<< lowest;

}
