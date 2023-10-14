#include <iostream>
using namespace std;

int main() {

    // scope
    int x1, y1, x2, y2;
    int ans;

    // masukan
    cin >> x1 >> y1 >> x2 >> y2;

    // keluaran
    ans = abs(x1 - x2) + abs(y1 - y2);
    cout << ans;

    cin.get();
    return 0;
}