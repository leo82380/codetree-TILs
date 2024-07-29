#include <iostream>
using namespace std;

int main() {
    int a = 1;
    int b = 2;
    int c = 3;
    int num = a + b + c;
    a = num;
    b = num;
    c = num;
    cout << a << " " << b << " " << c;
    return 0;
}