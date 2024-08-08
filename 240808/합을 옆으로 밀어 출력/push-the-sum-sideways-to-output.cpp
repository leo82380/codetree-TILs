#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    int num = 0;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        num += a;
    }
    string number = to_string(num);
    char front = number[0];
    number[0] = NULL;
    number += front;
    cout << number;

    return 0;
}