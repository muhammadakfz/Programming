#include <iostream>
using namespace std;

int main() {
    int a, b = 0;

    while (cin >> a) {
        b += a;
    }

    cout << b;
    cin.get();
    return 0;
}