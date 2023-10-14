#include <iostream>
using namespace std;

// prototype
void println(double x);
double hitung_luas(double p, double l);

int main() {

    int panjang, lebar, luas;

    cin >> panjang;
    cin >> lebar;

    luas = hitung_luas(panjang, lebar);

    println(luas);

    cin.get();
    return 0;
}

double hitung_luas(double p, double l) {
    return p * l;
}

void println(double x){
    cout << "Hasil: " << x << endl;
}