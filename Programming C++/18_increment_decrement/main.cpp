#include <iostream>
using namespace std;

int main() {
    // increment dan decrement
    // preincrement dan postincrement

    int a = 5;
    int b = 5;

    // postincrement
    cout << a << endl;
    cout << a++ << endl;
    cout << a << endl;

    // preincrement
    cout << a << endl;
    cout << ++a << endl;
    cout << a << endl;

    // predecrement dan postdecrement

    a = 7;
    b = 7;

    // postdecrement
    cout << a << endl;
    cout << a-- << endl;
    cout << a << endl;

    // predecrement
    cout << a << endl;
    cout << --a << endl;
    cout << a << endl;
    cin.get();
    return 0;
}
