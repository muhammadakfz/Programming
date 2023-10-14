#include <iostream>
using namespace std;

int main() {
    
    for (int i = 1; i <= 10; i++) {
        if (i == 6) {
            break;
            // continue;
        }
        cout << i << endl;
    }

    int i = 1;
    while (i <= 10) {
        i++;
        if (i == 6) {
            break;
            // continue;
        }
        cout << i << endl;
    }
    
    

    cin.get();
    return 0;
}