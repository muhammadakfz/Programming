#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define gc getchar
#define pb push_back
#define pf push_front
#define popb pop_back
#define popf pop_front
#define fi first
#define se second
#define len length
#define pii pair<int,int>
#define mapp map<int,int>
#define vi vector<int>
#define FOR(i, j) for(int i = 0; i < j; i++)
#define FORE(i, j) for(int i = 1; i <= j; i++)
#define fors(i, j, k) for(int i = j; i < k; i++)
#define fore(i, j, k) for(int i = j; i <= k; i++)
#define FORY(i, j) for(auto i: j)
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); cout.setf(ios::fixed); cout.precision(20);
using namespace std;

int main() {
    fastio;

    int arr[10001], a[10001], b[10001];
    int n, m, k;
    cin >> n >> m;

    FORE(i, m) {
        int x, y, z;
        cin >> x >> y >> z;
        a[x] = y; b[x] = z;
        arr[y]++;
    }

    int p = 0;
    FORE(i, n) if(!arr[i] and a[i]) p++;
    cout << p << endl;

    int cnt = 0;klklkeklkek

    FORE(i, n) if(!arr[i] and a[i]) {
        int q = INT_MAX;
        for (k = i; a[k]; k = a[k]) q = min(q, b[k]);
        cout << i << " " << k << " " << q << endl;
    }

    cin.get();
    return 0;
}