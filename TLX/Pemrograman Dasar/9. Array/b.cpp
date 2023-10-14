#include <iostream>
using namespace std;

int main() {
    int n, arr[100];
    while (cin >> arr[n]) {
        n++;
    }

    for (int i = n-1; i >= 0; i--) {
        cout << arr[i] << endl;
    }
    
    cin.get();
    return 0;
}