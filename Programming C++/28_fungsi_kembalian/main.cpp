#include <iostream>
using namespace std;

int kuadrat(int x) {
    int y;
    y = x * x;
    return y;
}

int tambah(int a, int b) {
    int ans = a + b;
    return ans;
}

int main() {
    int input, hasil, a, b, hasil2;
	cout << "nilai kuadrat dari: ";
	cin >> input;

	hasil = kuadrat(input);
	cout << hasil << endl;

	cout << "masukan nilai a: ";
	cin >> a;
	cout << "masukan nilai b: ";
	cin >> b;

	hasil2 = tambah(a,b);
	cout << hasil2 << endl;

    cin.get();
    return 0;
}