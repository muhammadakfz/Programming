#include <iostream>
using namespace std;

int main() {
    int n, m, p;
    int arr1[101][101], arr2[101][101], arr3[101][101];

    cin >> n >> m >> p;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> arr1[i][j];
        }
    }

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= p; j++) {
            cin >> arr2[i][j];
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= p; j++) {
            arr3[i][j] = 0;

            for (int k = 1; k <= m; k++) {
                arr3[i][j] += arr1[i][k] * arr2[k][j];
            }
            
            cout << arr3[i][j] << " ";
        }

        cout << endl;
    }

    cin.get();
    return 0;
}