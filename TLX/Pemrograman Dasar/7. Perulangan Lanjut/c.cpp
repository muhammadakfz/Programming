#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int num = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << num;
            num++;
            if (num == 10) {
                num = 0;
            }
        }
        cout << endl;
    }
    cin.get();
    return 0;
}