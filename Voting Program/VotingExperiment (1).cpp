//CS 13 Try This Code
#include<iostream>
#include<fstream>
#include<vector>

using namespace std;
int main()
{
	int i, list_size=3, id[list_size], ID, choice, 
		choice_adm, eligibleVoters=0, trump=0, clinton=0, bugsbunny=0, admin=2323, hacker_code=9867;
	vector <int> voted_id;
	vector <int> paper_trail;
	char decision;
	cout<<"\t\tAutomated electronic voting machine\n";
	
//create file with id numbers. In our case its just numbers from 5000 to 5000+list_size
	ofstream idfile("id.txt");
	for (i=0;i<list_size;i++)
		idfile<<5000+i<<"\n";
	idfile.close();
	
//create an empty file which will contain all the already voted people IDs	
	ofstream voted("voted.txt", ios::app);
	voted.close();	
	
//read the valid ids from file into the array			
	ifstream idfile1("id.txt");
	if (idfile1.is_open())
	{
		for (i=0; i<list_size; i++)
			idfile1>>id[i];			
	}
	else
		cout<<"Unable to open the file\n";
		
//read voted ids from file into a vector		
		ifstream voted1("voted.txt");
		if(voted1.is_open())
		{
			int v;
			while (voted1>>v)
				voted_id.push_back(v);	
		}
		else
			cout<<"Unable to open the file\n";		
//action	
	do
	{		
		cout<<"Please enter your ID: ";
		cin>>ID;
			
		ofstream paperTrail("PaperTrail.txt", ios::app);
		paperTrail<<ID<<"\n";
		paperTrail.close();	

//admin menu
	if (ID==admin)
	{
		do{
		
		cout<<"\tADMINISTRATOR MENU\n\n"
			<<"1. Print current result\n"
			<<"2. Print list of valid voter ids\n"
			<<"3. Print list of ids who have voted\n"
			<<"4. Paper trail\n";
		cin>>choice_adm;	
		if (choice_adm==1)
		{
			cout<<"\tCURRENT RESULTS\n"
				<<"Trump has "<<trump<<" voices\n"
				<<"Clinton has "<<clinton<<" voices\n"
				<<"BugsBunny has "<<bugsbunny<<" voices\n\n";
		}
		else if (choice_adm==2)
		{
			cout<<"LIST OF VALID VOTER IDS\n";
			for(int a=0; a<list_size; a++)
				cout<<id[a]<<"\n";
			cout<<"\n\n";	
		}
		else if (choice_adm==3)
		{
			cout<<"LIST OF IDS WHO HAVE VOTED\n";
			for(int a=0; a<voted_id.size(); a++)
				cout<<voted_id[a]<<"\n";
			cout<<"\n\n";	
		}
		else if (choice_adm==4)
		{
			cout<<"PAPER TRAIL\n";
			ifstream trail("PaperTrail.txt");
			int t;
			while (trail>>t)
				paper_trail.push_back(t);
			for (int a=0; a<paper_trail.size(); a++)
				cout<<paper_trail[a]<<"\n";
			cout<<"\n\n";		
		}
		cout<<"whould you like to print something else (y/n)? \n";
		cin>>decision;
	}
	while(decision=='y' or decision=='Y');
	}
		
//hacker menu	
	else if (ID==hacker_code)
		{
  		int htrump, hclinton, hbugsbunny;
		cout<<"\tWELCOME TO A SPECIAL MENU ^ _____ ^ \n\n"
			<<"Enter a new result for Trump: ";
		cin>>htrump;
		cout<<"Enter a new result for Clinton: ";
		cin>>hclinton;
		cout<<"Enter a new result for BugsBunny: ";
		cin>>hbugsbunny;
		cout<<" Thank you! The result was succefully changed!\n";
		ofstream hacked_result("results.txt");
		hacked_result	<<"\n      Results:\n"
						<<"Trump       "<<htrump<<"\n"
						<<"Clinton     "<<hclinton<<"\n"
						<<"BugsBunny   "<<hbugsbunny<<"\n";	
			
		hacked_result.close();
		break; //we end the loop so nobody can change the information after the hacker

	}
	
//regular people with id!=2323 and id!=9867	
	else
	{		
		for (int x=0; x<list_size; x++)				
			if (id[x]==ID)					
			{
				eligibleVoters++;
				cout<<"Make a choice: \n"
					<<"1. Trump\n"
					<<"2. Clinton\n"
					<<"3. BugsBunny\n";
				cin>>choice;
//add person's id in a list of already voted people						
				voted_id.push_back(ID);
				ofstream voted2("voted.txt", ios::app);
				voted2<<ID<<"\n";
				voted2.close();
//update information in a paper trail						
				ofstream paperTrail1("PaperTrail.txt", ios::app);	
				paperTrail1<<choice<<"\n";
				paperTrail1.close();	
//update the results of the voting
				if (choice==1)
					trump++;
				else if (choice==2)
					clinton++;
				else if (choice==3)
					bugsbunny++;
								
				ofstream results("results.txt");
				results<<"\n      Results:\n"
					   <<"Trump       "<<trump<<"\n"
					   <<"Clinton     "<<clinton<<"\n"
					   <<"BugsBunny   "<<bugsbunny<<"\n";
				results.close();	
				break;									
			}		
		if (eligibleVoters==0)
			cout<<"You are not eligible to vote\n\n";

	}	
	}
	while (eligibleVoters<list_size);
	
	return 0;
}
