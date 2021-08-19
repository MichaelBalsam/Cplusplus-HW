//Michael Balsam 
//Class CP2200
//Assignment PA3
#include <iostream>
using namespace std;

int factorial(int);
int fibonacci(int);
void Towers(int, int, int, int);
void Pascals_triangle(int);

int main()
{
	int choice;
	cout<<"\nChoice 1 is factorial\n";
	cout<<"Choice 2 is fibonacci\n";
	cout<<"choice 3 is towers\n";
	cout<<"choice 4 is pascals triangle\n";
	cout<<"choice 5 to quit\n";
	cin>>choice;
	
	if(choice == 1)  //choice 1 is the main for a factorial program 
	{
	int num;
	cout<<"Enter number\n";
	cin>>num;
	cout<< num <<"!= " << factorial(num) <<"\n";
	return main();
	}
	
	else if(choice == 2) //choice 2 is the main for a fibonacci program
	{
	int num;
	int i = 0;
	cout<<"Enter number for sequnce\n";
	cin>>num;
	cout<<"The series of the number "<< num <<" is ";
		
		while(i < num)
		{
		cout<<" "<<fibonacci(i);
		i++;
 		} 
 		cout<<"\n";
 		return main();
	}
	
	else if(choice == 3) //choice 3 is the main for a towers of hanoi program
	{
	int num ;
  	cout<<"How many disks? ";
  	cin>>num;
  	Towers(num,1,3,2);
  	cout<<"\n";
  	return main();
	}
	
	else if (choice == 4) //choice 4 is the main for pascal's triangle program 
	{
	int num;
	cout<<"Enter number of rows\n";
	cin>>num;
	Pascals_triangle(num);
	cout<<" ";
	return main();
	}
	
	else if(choice == 5) 
	{
	return 0;
	}
	return 0;
}

int factorial(int x)  //facotrial 
{
	int value;
	if(x <= 1)
	{
	value = 1;
	}
	else 
	{
	value = x * factorial(x-1);
	}
	return value;
}

int fibonacci(int num) //fibonacci 
{
	if(num == 1 || num == 0)
	{
		return(num);
	}
	else 
	{
		return(fibonacci(num-1)+fibonacci(num-2));
	}
}

void Towers(int num, int firstpeg, int extrapeg, int endpeg) //towers of hanoi 
{
 if (num > 0) 
   {
   Towers(num - 1, firstpeg, endpeg, extrapeg); 
   cout<<"Move disk "<< num <<" from peg ";
   cout<<firstpeg<<" to peg "<<extrapeg<<"\n"; 
   Towers(num - 1, endpeg, extrapeg, firstpeg); 
   }
}

void Pascals_triangle(int num) //pascal's trinagle 
{
 
	int coef = 1;
	for(int i = 0; i < num; i++)
	{
		for(int space = 1; space<= num - i; space++)
			cout<<" ";

		for(int j = 0; j <= i; j++)
		{
			if(j == 0 || i == 0)
				coef = 1;
			
			else 
			coef = coef * ( i - j + 1) / j;
				cout<< coef<<" ";	
		}
	cout<<"\n";
	}
}

