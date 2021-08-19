// This program demonstrates an array being passed to a function.
#include <iostream>
using namespace std;

void showValues(const int [], int);
void showValues(const char [], int); 
void LetterGrade(const int [], char [], int);

int main()
{
   const int ARRAY_SIZE = 8;
   int score[ARRAY_SIZE];
   char grade[ARRAY_SIZE];
   	for(int i = 0; i < ARRAY_SIZE; i++)
	{
		cout <<"Enter 10 grades "<< i+1 << " : ";	
		cin >> score[i];
	while(score[i] < 0 || score[i] > 100)
		{
		cout<<"Invalid input enter a number between 0 and 100 "<< i+1 << " : ";
		cin>>score[i];
		}
	}
   LetterGrade(score, grade, ARRAY_SIZE);
   showValues(score, ARRAY_SIZE);
   showValues(grade, ARRAY_SIZE);
   return 0;
}

void showValues(const int nums[], int size)
{
   for (int index = 0; index < size; index++)
      cout << nums[index] << " ";
   cout << endl;
}
void showValues(const char s[], int size)
{
   for (int index = 0; index < size; index++)
      cout << s[index] << " ";
   cout << endl;
}
void LetterGrade(const int s[], char letter[], int size)
{
	for(int i=0;i<size;i++)
	{
		if(s[i]>=90)
			letter[i]='A';
		else if(s[i]>=80)
			letter[i]='B';
		else if(s[i]>=70)
			letter[i]='C';
		else if(s[i]>=60)
			letter[i]='D';
		else
			letter[i]='F';
	}
}



