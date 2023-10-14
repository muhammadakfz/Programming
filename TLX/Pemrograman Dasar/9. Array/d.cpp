#include <iostream>
using namespace std;

int main() {
    int n, m;
    int arr[101][101];

    cin >> n >> m;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> arr[i][j];
        }
    }
    
    for (int i = 1; i <= m; i++) {
        for (int j = n; j >= 1; j--) {
            cout << arr[j][i];
            if (j != 1) {
                cout << " ";
            } else {
                cout << endl;
            }
            
        }
    }

    cin.get();
    return 0;
}