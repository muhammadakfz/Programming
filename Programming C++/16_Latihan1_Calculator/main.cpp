#include <iostream>
using namespace std;

int main() {
    float a, b, hasil;
    char aritmatika;

    cout << "Selamat datang di program calculator \n";

    // masukan input dari user
    cout << "Masukkan nilai pertama: ";
    cin >> a;
    cout << "Pilih operator +, -, *, /: ";
    cin >> aritmatika;
    cout << "Masukkan nilai kedua: ";
    cin >> b;

    if (aritmatika == '+') {
        hasil = a + b;
    } else if (aritmatika == '-') {
        hasil = a - b;
    } else if (aritmatika == '*') {
        hasil = a*- b;
    } else if (aritmatika == '/') {
        hasil = a / b;
    } else {
        cout << "operator anda salah" << endl;
        exit;
    }

    cout << a << " " << aritmatika << " " << b << " = " << hasil << endl;
    cin.get();
    return 0;
}