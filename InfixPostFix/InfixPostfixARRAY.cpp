//Infix to postfix converter without stacks and for a single character input

#include <iostream>
#include <string>

using namespace std;

int main()
{
    char operands[50];   //stack
    string expression;
    short stack_top = -1;   //stack pointer
    bool flag;

    cout << "Enter expression: ";
    getline(cin, expression);

    //converting algorithm
    for( int i = 0; i < expression.length(); i++ )   //goes through character by character
    {
        if( isalnum(expression[i])  ) //if char is number or a letter 
            cout << expression[i];
        else if( expression[i] == '(' )
            operands[++stack_top] = expression[i];
        else if( expression[i] == '*' || expression[i] == '/' || expression[i] == '+' || expression[i] == '-' )
            do
            {
                flag = false;
                if( stack_top == -1 || operands[stack_top] == '(' ) //stack_top == -1 means stack is empty
                    operands[++stack_top] = expression[i];
                else if( ( operands[stack_top] == '+' || operands[stack_top] == '-' ) && ( expression[i] == '*' || expression[i] == '/' ) ) //if higher precedence
                        operands[++stack_top] = expression[i]; 
                else
                {
                    cout << operands[stack_top--];
                    flag = true;
                }
            } while( flag );
        else if( expression[i] == ')' )
            while( operands[stack_top--] != '(' ) cout << operands[stack_top+1];           
    }
    for( int i = stack_top; i >=0; i-- ) cout << operands[i];
    //end of algorithm

    cout << endl;
    
}
