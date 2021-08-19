#include <iostream>
using namespace std;

int main()
{
	int x;
	int * p;   //creates a pointer 
	p = &x;   // points to the address of varible x
	x = 12;
	*p = 400;
	cout<<"x= "<< x;     //prints out 12
	cout<<"\nX is stored at "<< &x ;    //prints out where the address of x is located on the computer
	cout<<"\np= "<< p;         //prints out where the address of x is located on the computer
	cout<<"\n*p= "<<*p;       //prints out the variable stored in x
	return 0;
}
