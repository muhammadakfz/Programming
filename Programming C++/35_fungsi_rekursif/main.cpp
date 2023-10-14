#include <iostream>
using namespace std;

// fungsi rekursif terbatas
int pangkat(int a, int b) {
    int hasil = a;
    for (int i = 0; i < b; i++) {
        hasil = hasil * a;
    }
    return hasil;
}

int pangkatRekursif(int a, int b) {
    return a * pangkatRekursif(a, (b-1));
}

int main() {
    

    cin.get();
    return 0;
}