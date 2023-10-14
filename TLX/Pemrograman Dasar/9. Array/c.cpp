#include <iostream>
using namespace std;

int main() {
	
	int n, m;
	int modus = 0, ans;
	int arr[1001] = {0};

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> m;
		arr[m]++;
	}

	for (int i = 1; i <= 1000; i++) {
		if (arr[i] >= modus) {
			modus = arr[i];
			ans = i;
		}
		
	}

	cout << ans;;
	cin.get();
	return 0;
}