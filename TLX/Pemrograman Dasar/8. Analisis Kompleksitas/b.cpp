#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int x, y;

    cin >> x;
    for (int i = 0; i < x; i++) {
        cin >> y;

        bool check_prima = true;
        if (y == 1) {
            check_prima = false;
        } else {
            for (int j = 2; j*j <= y; j++) {
                if (y % j == 0) {
                    check_prima = false;
                }
            }
        }

        if (check_prima) {
            cout << "YA\n";
        } else {
            cout << "BUKAN\n";
        }
    }
    
    cin.get();
    return 0;
}