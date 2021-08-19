#include<iostream>
using namespace std;

void Towers(int n, int fp, int lp, int tp) 
{
 if (n > 0) 
   {
   Towers(n-1, fp, tp, lp); 
   cout<<"Move disk "<<n<<" from peg "
       <<fp<<" to peg "<<lp<<"\n"; 
   Towers(n-1, tp, lp, fp); 
   }
}

int main() 
{
  int n ;
  cout<<"How many disks ? ";
  cin>>n;
  Towers(n,1,3,2);
  cout<<"\n\n";
  return 0;
}
