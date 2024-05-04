#include <iostream>
#include <string>
#include <stack>

using namespace std;

bool checkBalancedParentheses(const string& expression) {
    stack<string> parenthesesStack;
    for (char c : expression) {
        if (c == '(') {
            parenthesesStack.push("(");
        } else if (c == ')') {
            if (parenthesesStack.empty() || parenthesesStack.top() != "(") {
                return false; 
            }
            parenthesesStack.pop();
        }
    }
    return parenthesesStack.empty();
}

int main() {
    string expression;
    cout << "Enter an expression: ";
    cin >> expression;

    if (checkBalancedParentheses(expression)) {
        cout << "Balanced\n";
    } else {
        cout << "Not Balanced\n";
    }

    return 0;
}
