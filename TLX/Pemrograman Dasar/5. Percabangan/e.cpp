#include <iostream>
using namespace std;

int main() {
    // scope
    int a;

    // masukan
    cin >> a;

    // if/else
    if (a < 10) {
        cout << "satuan";
    } else if(a > 9 && a < 100){
        cout << "puluhan";
    } else if(a > 99 && a < 1000){
        cout << "ratusan";
    } else if(a > 999 && a < 10000){
        cout << "ribuan";
    } else {
        cout << "puluhribuan";
    }
    cin.get();
    return 0;
}