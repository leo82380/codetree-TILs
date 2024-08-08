#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int* a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int min = 100;
    for (int i = 0; i < n - 2; i++) {
        if (a[i + 1] - a[i] < min) min = a[i + 1] - a[i];
    }
    cout << min;
    return 0;
}