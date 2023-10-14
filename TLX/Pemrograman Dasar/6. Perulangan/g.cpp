#include <iostream>
using namespace std;

int main() {
    int a, b, max, min;
    cin >> a;

    for (int i = 1; i <= a; i++) {
        cin >> b;
        if (i == 1) {
			max = b;
			min = b;
		} if (b < min) {
			min = b;
		} else if (b > max) {
			max = b;
		} else {

		}
    }
    
    cout << max << " " << min;
    cin.get();
    return 0;
}