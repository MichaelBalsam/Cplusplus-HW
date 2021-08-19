#include <iostream>
#include <sstream>
#include <stack>
#include <limits>
#include <string>
using namespace std;

int priority(char a) {
    int temp;
    if (a == '^') temp = 1;
    else  if (a == '*' || a == '/') temp = 2;
    else  if (a == '+' || a == '-') temp = 3;
    return temp;
}

int main() {
    bool truth=false; //boolean for testing parenthesis
    while(!truth){ //loop until user enters a real expression
    string infix;
    cout << "Enter an arithmetic expression: " << endl;
    getline(cin, infix);
    stack<char> operator_stack;
    stringstream output;
    int x=0, y=0; //int
    for (unsigned i = 0; i < infix.length(); i++) {
        if (infix[i] == '+' || infix[i] == '-' || infix[i] == '*' || infix[i] == '/' || infix[i] == '^') {
            while (!operator_stack.empty() && priority(operator_stack.top()) <= priority(infix[i])) {
                output << operator_stack.top();
                operator_stack.pop();
            }
            operator_stack.push(infix[i]);
        } else if (infix[i] == '(') {
            x++; //cout opens
            operator_stack.push(infix[i]);
        } else if (infix[i] == ')') {
            y++; //cout closes
            if(y>x) break; //if there is more closing parethesis, this crashes
            while (operator_stack.top() != '(') {
                output << operator_stack.top();
                operator_stack.pop();
            }
            operator_stack.pop();
        } else {
            output << infix[i];
        }
    }
    while (!operator_stack.empty()) {
        output << operator_stack.top();
        operator_stack.pop();
    }
    truth = (x==y); //if it's uneven don't do this next line
    if(truth)cout << output.str() << endl;
    else cout<<"unbalanced parenthesis\n";
    }
    return 0;
} 



