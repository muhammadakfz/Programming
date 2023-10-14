#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int x, y;

    cin >> x;
    for (int i = 0; i < x; i++) {
        int z = 0;
        cin >> y;

        for (int j = 2; j <= sqrt(y); j++) {
            if(y % j == 0) {
                z++;
            } else {
                continue;
            }
        }
        

        if (z <= 1) {
            cout << "YA\n";
        } else {
            cout << "BUKAN\n";
        }
    }
    
    cin.get();
    return 0;
}