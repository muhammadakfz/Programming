#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define FOR(i, j) for(int i = 0; i < j; i++)
#define FORE(i, j) for(ll i = 1; i <= j; i++)
#define FORY(i, j) for(auto i: j)
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll N, M, ans = 1;
    cin >> N;
    FORE(i, N) {
        M = pow(i, 2);
        ans = M;
        cout << N << " ";
        N ^= M;
    }

    if(N == 0) cout << "LOSE" << endl;
    else cout << "WIN" << endl;
    cin.get();
    return 0;
}