#include <iostream>
using namespace std;

int main() {
    int a, b = 0;
    cin >> a;

    for (int i = 1; i <= a; i*=2) {
        if (i == a) {
            b += i;
            break;
        } else {
            continue;
        }
    }
    
    if (b == a) {
        cout << "ya";
    } else {
        cout << "bukan";
    }
    

    cin.get();
    return 0;
}