#include <iostream>
#include <cstdlib>
#include <cString>
#include <cctype>
using namespace std;

int main()
{
  char str[]="1776ad";
  int year;
  if (isdigit(str[0]))
  {
    year = atoi (str);
    printf ("The year that followed %d was %d.\n",year,year+1);
  }
  return 0;
}
