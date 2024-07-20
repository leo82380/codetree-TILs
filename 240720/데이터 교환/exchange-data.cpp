#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int b = 6;
    int c = 7;
    int tempA, tempB, tempC;
    tempA = a;
    tempB = b;
    tempC = c;
    b = tempA;
    c = tempB;
    a = tempC;

    cout << a << endl;
    cout << b << endl;
    cout << c;
    return 0;
}