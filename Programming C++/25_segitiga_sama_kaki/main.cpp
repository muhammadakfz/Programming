#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan nilai ke-n: ";
    cin >> n;

    cout << "Pola 1\n";
    for (int i = 1; i <= n; i++) {
        for (int k = n; k > i; k--)
        {
            cout << " ";
        }
        for (int j = 1; j <= (i * 2 - 1); j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    cout << "Pola 2\n";
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j < i; j++)
        {
            cout << " ";
        }
        for (int k = n; k >= (i * 2 - 5); k--)
        {
            cout << "*";
        }

        cout << endl;
    }

    cout << "Pola 3\n";
    for (int i = 1; i <= n; i++) {
        for (int k = n; k > i; k--)
        {
            cout << " ";
        }
        for (int j = 1; j <= (i * 2 - 1); j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j < i; j++)
        {
            cout << " ";
        }
        for (int k = n; k >= (i * 2 - 5); k--)
        {
            cout << "*";
        }

        cout << endl;
    }

    cin.get();
    return 0;
}