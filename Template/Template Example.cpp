//Michael Balsam
//Cpp 2200
#include <iostream>
using namespace std;

template<class E>
E score(E E1, E E2, E AT,E F)
{
	E result;
	result = E1*(.25) + E2*(.25) + AT*(.15) + F*(.35);
	return result;
}

int main()
{
	int i,j,m,n, k;
	double f,g,d,a, h;
	cout<<"Enter grades for int\n";
	cin>>i;
	cin>>j;
	cin>>m;
	cin>>n;
	cout<<"Enter grades for double\n";
	cin>>f;
	cin>>g;
	cin>>d;
	cin>>a;
   //int i=90, j=85, m=85, n=100, k;
  //double f=90.3, g=85.7, d=98.2, a=78.4, h;
  k=score<>(i,j,m,n);
  h=score<>(f,g,d,a);
  cout <<"The score as an int is: "<< k << '\n';
  cout <<"The score as a double is: "<< h << '\n';
  return 0;
}
