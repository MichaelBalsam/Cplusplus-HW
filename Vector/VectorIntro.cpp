// Vector example - CS 13
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> myVector;
    int num, choice;
    
    do
    {
         cout <<"\n\n1. Add an integer to the vector\n"
              <<"2. Print the contents of the vector\n"
              <<"3. Clear the vector\n"
              <<"4. Quit\n\n";
         cin >> choice;
         cout << "\n";
  
         if (choice == 1)
            {
             cout << "integer value to add? ";
             cin >> num;
             myVector.push_back(num);
             }
  
         else if (choice == 2)
            {
             if (myVector.empty())cout<< "\nThe vector is empty!\n\n\n";
             else 
                  for(int i=0; i < myVector.size(); i++)
                          cout << "\nmyVector["<<i<<"] is " << myVector[i];
                          cout<<"\n\n";
                          }
  
         else if (choice == 3) myVector.clear();
  
         } while (choice != 4) ;
         
         cout << "\n\n";
         return 0;
}
         
    
