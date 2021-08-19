#include <iostream>
using namespace std;

int SecondMin(int [], int);
 
int main()
{
	int const ArraySize = 5;
	int Numbers[ArraySize];
	
	for(int i = 0; i < ArraySize; i++)
	{
		cout<<"Enter Numbers "<<i+1 <<":";
		cin>>Numbers[i];
    }
		cout<<"The second min is: "<< SecondMin(Numbers, ArraySize)<< endl;
		return 0;
}
int SecondMin(int Array[], int Size)
{
	int Min, MinIndex, Min2;
	Min = Array[0];
	MinIndex = 0;
	for(int i = 1; i < Size; i++)
	{
		if(Min > Array[0])
		{
			Min = Array[i];
			MinIndex = i; 	
		}
	}
	if(MinIndex == 0)
		Min2 = Array[1];
	else
		Min2 = Array[0];
	
	for(int i = 1; i < Size; i++)
		if(i != MinIndex)
			if(Min2 > Array[i])
		{
			Min2 = Array[i];	
		}		
	return Min2;
}


	
