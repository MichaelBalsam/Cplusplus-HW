#include <iostream>
using namespace std;

int main()
{
	int x[3]={2,8,47};
	int * p;
	p = x; 
	for(int i = 0; i <= 2; i++)
	cout<<" x["<<i<<"]="<<x[i];
	cout<<"\n"<<*x+1<<" "<<*(x+1);
	cout<<"\n"<<*p+2<<" "<<*(p+2)<<" "<<x[2];
	return 0;
}
