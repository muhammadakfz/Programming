#include <iostream>
using namespace std;

int main() {

    cout << "Loop 1 \n";
    for (int i = 1; i <= 10; i++) {
        cout << i << endl;
    }
    
    cout << "Loop 2 \n";
    for (int i = 1; i <= 10; i+=2) {
        cout << i << endl;
    }

    cout << "Loop 3 \n";
    for (int i = 1; i >= -10; i--) {
        cout << i << endl;
    }
    
    cout << "Loop 4 \n";
    int total = 0;
    for (int i = 1; i <= 10; i++) {
        total += i;
        cout << i << "||" << total << endl;
    }

    cout << "Loop 5 \n";
    int total1 = 0;
    for (int i = 1; i <= 10; i++, total1 += i) {
        cout << i << "||" << total1 << endl;
    }
    
    cin.get();
    return 0;
}
