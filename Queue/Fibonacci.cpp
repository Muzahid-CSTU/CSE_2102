#include<iostream>
using namespace std;

int fibonacci(int n) {
    if(n == 0) return 0;
    if(n == 1) return 1;
    return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
    int num;
    cout << "Enter the number of terms: ";
    cin >> num;

    cout << "Fibonacci series: ";
    for(int i = 0; i < num; i++) {
        cout << fibonacci(i) << " ";
    }
    cout << endl;

    return 0;
}
