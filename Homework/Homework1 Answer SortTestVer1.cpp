//Student Solution to Assignment 1
//Copyright (c) 2019 by Tatiana Azulay and Dmytro Postolovskyy 
#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
#include<fstream>
#include<string>

using namespace std;

int main()

{int choice;
 int temp;
 clock_t   start, end;
 double    duration;
 string line;
 cout<<"\n\n-----------------------------";
 cout<<"\nMAIN MENU:\n";
 cout<<"1. Create New Data Sets \n2. Run a Sort Test \n3. Quit\n";
 cout<<"-----------------------------\n";
 cin>>choice;

//1. Create New Data Sets
 if (choice==1) {
    cout<<"\n\nCreate New Data Sets:\n";
    cout<<"\n1.Best case \n2.Worst Case \n3.Average Case\n\n";
    cin>>choice;
//Create BestCase File
    if (choice==1) {
    int times;
    cout<<"How many numbers would you like to create?\n";
    cin>>times;
    ofstream myfile; // for output only, myfile can be diff
    myfile.open ("BestCase.txt");
    for (int x=1; x<=times; x++) myfile << x <<"\n";
    myfile.close();
    cout<<"\nBestCase file was created\n"<<endl;
  } 
//Create WorstCase File
  else if (choice==2) {
  int times;
  cout<<"How many numbers would you like to create?\n";
  cin>>times;
  ofstream myfile; // for output only, myfile can be diff
  myfile.open ("WorstCase.txt");
  for (int x=times; x>=1; x--) myfile << x <<"\n";
  myfile.close(); 
  cout<<"\nWorstCase file was created\n\n"; 
  } 
//Create AverageCase File (random numbers)
  else if (choice==3) {
     int times;
     cout<<"How many numbers would you like to create?\n";
     cin>>times;
     srand(time(0));
     ofstream  x1 ("AverageCase.txt" );
     for (int x=times; x>=1; x--) x1 << rand()%100 <<"\n";
     x1.close(); 
     cout<<"\nAverageCase file was created\n"<<endl; 
    } 
   }
//2. Run a Sort Test
   else if (choice==2) {
   cout<<"\n\nRun a Sort Test:\n";
   cout<<"\n1.Plain Bubble Sort \n2.Efficient Bubble Sort\n\n";
   cin>>choice;
//Plain Bubble Sort 
   if (choice==1) {
      const int ARRAY_SIZE=10000;
      int data[ARRAY_SIZE];
      int temp;
      clock_t   start, end; 
      double    duration;
      string line;
      cout<<"\nPlain Bubble Sort:\n";
//BestCase
   ifstream File1("BestCase.txt");
   if (File1.is_open())
   {for (int index=0; index<=ARRAY_SIZE; index++)
    while ( File1>>data[index] )
    {File1>>data[index];} //put file data in array
   File1.close();
  }
 else {
 cout<<"File BestCase is not created. Go to Main Menu and Create New Data Sets\n\n"; 
 return main();
 }
 start = clock() ; //Start timing
//Plain Bubble Sort for BestCase
  for(int pass=1; pass<=(ARRAY_SIZE-1); pass++)
  {
   for(int index=0; index<(ARRAY_SIZE-1); index++) 
   if (data[index]>data[index+1])
  {temp=data[index];
   data[index]=data[index+1];
   data[index+1]=temp;
  }
 }
 end = clock() ; //End timing  
 duration=((double)(end - start))/CLOCKS_PER_SEC; //Compute seconds
 cout<<"\nPlain Bubble Sort for BestCase took "<<setprecision(3)<<fixed<<duration<<" seconds!\n";
//WorstCase
 ifstream File2("WorstCase.txt");
 if (File2.is_open())
  {for (int index=0; index<=ARRAY_SIZE; index++)
    while ( File2>>data[index] )
    {  File2>>data[index];  }
    File2.close();
  }
 else {
  cout<<"File WorstCase is not created. Go to Main Menu and Create New Data Sets\n\n"; 
  return main();
  }
  start = clock() ; //Start timing
//Plain Bubble Sort for WorstCase
 for(int pass=1; pass<=(ARRAY_SIZE-1); pass++)
    {
 for(int index=0; index<(ARRAY_SIZE-1); index++) 
 if (data[index]>data[index+1])
 {temp=data[index];
  data[index]=data[index+1];
  data[index+1]=temp;
 }
 }
 end = clock() ; //End timing  
 duration=((double)(end - start))/CLOCKS_PER_SEC; //Compute seconds
 cout<<"\nPlain Bubble Sort for WorstCase took "<<setprecision(3)<<fixed<<duration<<" seconds!\n";  
//AverageCase
 ifstream File3("AverageCase.txt");
 if (File3.is_open())
 {for (int index=0; index<=ARRAY_SIZE; index++)
  while ( File3>>data[index] )
    { File3>>data[index]; }
    File3.close();
   }
 else {
 cout<<"File AverageCase is not created. Go to Main Menu and Create New Data Sets\n\n"; 
 return main();
 }
 start = clock() ; //Start timing
//Plain Bubble Sort for AverageCase
 for(int pass=1; pass<=(ARRAY_SIZE-1); pass++)
 {
 for(int index=0; index<(ARRAY_SIZE-1); index++) 
 if (data[index]>data[index+1])
 {temp=data[index];
  data[index]=data[index+1];
  data[index+1]=temp;
 }
 }
 end = clock() ; //End timing  
 duration=((double)(end - start))/CLOCKS_PER_SEC; //Compute seconds
 cout<<"\nPlain Bubble Sort for AverageCase took "<<setprecision(3)<<fixed<<duration<<" seconds!\n";  
 cout<<"\n\n";
 return main();
 } 
//Efficent Bubble Sort 
 else if (choice==2) {
 const int ARRAY_SIZE=10000;
 int data[ARRAY_SIZE];
 int temp;
 bool swapFlag;
 clock_t   start, end;
 double    duration;
 string line;
 cout<<"\nEfficent Bubble Sort: "<<endl;
 ifstream File1("BestCase.txt");
 if (File1.is_open())
 {for (int index=0; index<ARRAY_SIZE; index++)
  while (File1>>data[index])
  { File1>>data[index];    }
    File1.close();
  }
 else {
 cout<<"File BestCase is not created. Go to Main Menu and Create New Data Sets\n\n"; 
 return main();
 }
 start = clock() ; 
//Efficent Bubble Sort for BestCase
for(int pass=1; pass<=(ARRAY_SIZE-1); pass++)
 {swapFlag=0;
 for(int index=0; index<(ARRAY_SIZE-1); index++) 
  {if (data[index]>data[index+1])
   {swapFlag=1;
    temp=data[index];
    data[index]=data[index+1];
    data[index+1]=temp;
   }
  } 
 if(swapFlag==0) break;
 }
 end = clock() ;
 duration=((double)(end - start))/CLOCKS_PER_SEC;
 cout<<"\nEfficent Bubble Sort for BestCase took "<<setprecision(3)<<fixed<<duration<<" seconds!\n";
 ifstream File2("WorstCase.txt");
 if (File2.is_open())
 {for (int index=0; index<ARRAY_SIZE; index++)
  while (File2>>data[index])
  { File2>>data[index];     }
  File2.close();
  }
 else {
 cout<<"File WorstCase is not created. Go to Main Menu and Create New Data Sets\n\n"; 
 return main();
 }
 start = clock() ; 
 //Efficent Bubble Sort for WorstCase
 for(int pass=1; pass<=(ARRAY_SIZE-1); pass++)
 {swapFlag=0;
 for(int index=0; index<(ARRAY_SIZE-1); index++) 
 {if (data[index]>data[index+1])
 {swapFlag=1;
  temp=data[index];
  data[index]=data[index+1];
  data[index+1]=temp;
  }
 }
 if(swapFlag==0) break;
 }
 end = clock() ;  
 duration=((double)(end - start))/CLOCKS_PER_SEC; 
 cout<<"\nEfficent Bubble Sort for WorstCase took "<<setprecision(3)<<fixed<<duration<<" seconds!\n";  
 ifstream File3("AverageCase.txt");
 if (File3.is_open())
  {for (int index=0; index<ARRAY_SIZE; index++)
  while (File1>>data[index])
  {  File3>>data[index];   }
  File3.close();
  }
  else {
  cout<<"File AverageCase is not created. Go to Main Menu and Create New Data Sets\n\n"; 
  return main();
  }
  start = clock() ; 
//Efficent Bubble Sort for AverageCase
 for(int pass=1; pass<=(ARRAY_SIZE-1); pass++)
  {swapFlag=0;
  for(int index=0; index<(ARRAY_SIZE-1); index++) 
   if (data[index]>data[index+1])
   {swapFlag=1;
    temp=data[index];
    data[index]=data[index+1];
    data[index+1]=temp;
   }
   if(swapFlag==0) break;
  }
  end = clock() ; 
  duration=((double)(end - start))/CLOCKS_PER_SEC; 
  cout<<"\nEfficent Bubble Sort for AverageCase took "<<setprecision(3)<<fixed<<duration<<" seconds!\n";  
  cout<<"\n\n";
  return main(); 
 } 
 }
//3.Quit 
 else if (choice==3) {
 return 0; 
 }
 else
 cout<<"\n\nIncorrect number. Try again\n\n";
 return main();
}


