//Identifying Identifiers 
#include <iostream>
#include <cstring>
#include <cctype>
#include <cstdlib>
using namespace std;
bool isId (string s, int i)
{
    if (i == 0)
    {
        if (isalpha(s[i]))
            return true;
        else
            return false;
    }
    else if (!isdigit(s[i]) || !isalpha(s[i]))
        return isId (s, (i-1));
    else
        return false;
}

int main()
{
    string s;
    int i;
    while(true)
    {
	cout << "\n\n\nEnter your next token: " ;
    getline(cin, s);
    i = s.length();
    if (isId (s, i))
        cout << "That IS a legal c++ identifier";
    else
        cout << "NOT a legal C++ Identifer";
    }
    return 0;
}
