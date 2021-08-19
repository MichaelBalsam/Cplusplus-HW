#include<iostream>
using namespace std;
int main()
{
 struct employee
        { string name;
          int    id ;
          char   gender;
        };
 int choice , count=0 ;
 employee fullTime[1000] ;
 do{cout<<"\n\nHR Database\n-----------"
        <<"\n1)Add new employee"
        <<"\n2)Print Employee Database"
        <<"\n3)Quit\n\nYour selection? ";
    cin>>choice;
	if(choice==1)
	   {count++;
	    cout<<"\nEmployee "<<count<<" name? ";
		cin>> fullTime[count].name;
		cout<<"\nEmployee "<<count<<" ID? ";
		cin>> fullTime[count].id;
		cout<<"\nEmployee "<<count<<" gender? ";
		cin>> fullTime[count].gender;
		cout<<"\n\nDATABASE UPDATED \n\n";
	   }
	if(choice==2)
	   {cout<<"\n\n------------------------------------";
	    cout<<"\n\nID\tgender\tName\n--\t------\t----";
	    for(int i=1 ; i<=count ; i++)   
		 cout<<"\n"<<fullTime[i].id
		     <<"\t"<<fullTime[i].gender
		     <<"\t"<<fullTime[i].name;
		 cout<<"\n\n------------------------------------";
	   }
   }while(choice!=3);

 cout<<"\n\n";
 return 0;
}
