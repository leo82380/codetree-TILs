#include <iostream>
#include <string>
using namespace std;

int main() {
    string a;
    string b;
    string c;
    string d;

    cin >> a;
    cin >> b;

    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] > 'a' && a[i] < 'z') continue;
        c += a[i];
    }
    for (int i = 0; i < b.length(); i++)
    {
        if (b[i] > 'a' && b[i] < 'z') continue;
        d += b[i];
    }

    int firstNum = stoi(c);
    int secondNum = stoi(d);

    cout << firstNum + secondNum;
    return 0;
}