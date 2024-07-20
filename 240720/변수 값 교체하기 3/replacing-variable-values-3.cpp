#include <iostream>
using namespace std;

void Swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
    cout << a << endl << b;
}

int main() {
    int a = 3;
    int b = 5;
    Swap(a, b);
    return 0;
}