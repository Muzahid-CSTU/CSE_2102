#include <bits/stdc++.h>
using namespace std;

int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    if (op == '^') return 3;
    return 0;
}

bool isOperator(char c) {
    return c == '+' || c == '-' || c == '*' || c == '/' || c == '^';
}

string infix_To_Postfix(string infix) {
    stack<char> s;
    string postfix;
    s.push('(');
    string ss = infix + ')';

    for (char x : ss) {
        if (x == ' '){
            continue;
        }
        if (isdigit(x)){
            postfix += x;
        }
        else if (x == '('){
            s.push(x);
        }
        else if (isOperator(x)) {
            postfix += ' ';
            while (!s.empty() && isOperator(s.top()) && precedence(s.top()) >= precedence(x)) {
                postfix += s.top();
                postfix += ' ';
                s.pop();
            }
            s.push(x);
        }
        else if (x == ')') {
            while (!s.empty() && s.top() != '(') {
                postfix += ' ';
                postfix += s.top();
                s.pop();
            }
            s.pop();
        }
    }

    return postfix;
}

int main() {
    string infix;
    cout << "Enter infix : ";
    getline(cin, infix);

    string postfix = infix_To_Postfix(infix);
    cout << "Postfix expression: " << postfix << endl;
    return 0;
}
