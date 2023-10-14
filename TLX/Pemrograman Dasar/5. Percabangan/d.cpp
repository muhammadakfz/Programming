#include <iostream>
using namespace std;

int main() {
    
    // scope
    int a;

    // masukan
    cin >> a;

    // if/else
    if (a > 0) {
        cout << "positif";
    } else if(a == 0){
        cout << "nol";
    } else {
        cout << "negatif";
    }

    cin.get();
    return 0;
}