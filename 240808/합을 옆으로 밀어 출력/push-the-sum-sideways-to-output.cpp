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
    string aaaaaaaaa = "";
    for (int i = 1; i < number.length(); i++)
    {
        aaaaaaaaa += number[i];
    }
    aaaaaaaaa += number[0];
    cout << aaaaaaaaa;
    return 0;
}