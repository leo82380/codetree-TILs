#include <iostream>
using namespace std;

void Print(int a, int b, float c){
    cout << fixed;
    cout.precision(1);
    cout << a + b + c;
}

int main() {
    int a = 15;
    int b = 10;
    float c = 0.352f;
    Print(a, b, c);
    return 0;
}