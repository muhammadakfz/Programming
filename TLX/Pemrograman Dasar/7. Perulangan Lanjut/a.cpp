#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i < 42 && i % 10 != 0) {
            cout << i << endl;
        } else if(i == 42) {
            cout << "ERROR" << endl;
            break;
        }
        
    }
    

    cin.get();
    return 0;
}