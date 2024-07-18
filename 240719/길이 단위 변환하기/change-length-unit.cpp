#include <iostream>
using namespace std;

float Change(bool isft, float a){
    if (isft == true){
        return a * 30.48;
    }
    else{
        return a * 160934;
    }
    return 0;
}

int main() {
    cout << fixed;
    cout.precision(1);
    cout << "9.2ft = " << Change(true, 9.2f) << "cm" << endl;
    cout << "1.3mi = " << Change(false, 1.3f) << "cm";
    return 0;
}