#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[] = {70, 52, 60, 25, 28, 45};
    int n = 6;

    swap(a[0], a[n - 1]);
    n--; 

    int p = 0;
    while (true) {
        int l = 2 * p + 1;
        int r = 2 * p + 2;
        int largest = p;

        if (l < n && a[l] > a[largest])
            largest = l;
        if (r < n && a[r] > a[largest])
            largest = r;

        if (largest != p) {
            swap(a[p], a[largest]);
            p = largest;
        } else {
            break;
        }
    }

    cout << "Heap after deleting max: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
