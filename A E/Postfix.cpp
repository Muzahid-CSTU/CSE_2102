#include <bits/stdc++.h>
using namespace std;

int PostFix(string pp)
{
    stack<int> s;
    stringstream ss(pp);
    string op;

    while (ss >> op){
        if (isdigit(op[0]))
        {
            s.push(stoi(op));
        }
        else
        {
            int A = s.top();
            s.pop();
            int B = s.top();
            s.pop();
            int r;

            if (op == "+"){
                r = B + A;
            }
            else if (op == "-"){
                r = B - A;
            }
            else if (op == "*"){
                r = B * A;
            }
            else if (op == "/"){
                r = B / A;
            }
            else if (op == "^"){
                r = pow(B, A);
            }

            s.push(r);
        }
    }

    return s.top();
}

int main() {
    string p;
    cout << "Enter postfix: ";
    getline(cin, p);

    int x = PostFix(p);
    cout << "Value: " << x << endl;
    return 0;
}
