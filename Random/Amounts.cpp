#include <bits/stdc++.h>
#define int long long
#define INT unsigned long long
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define pii pair<int,int>
#define forp(i, x, y) for(int i = x; i < y; i++)
#define forn(i, x, y) for(int i = x; i >= y; i--)
#define ya cout << "YES\n"
#define nah cout << "NO\n"
#define FF(x) for(int i = 0; i < x; i++)
#define FFm(x) for(int i = x-1; i >= 0; i--)
#define sv(x) sort(x.begin(), x.end())
#define in(x) cin >> x
#define C(x) cout << x << '\n'
#define CC(x,y)  cout << x << " " << y << " \n"
#define T(x) cout << '>' << #x << ':' << x << "\n"
#define T2(x,y) cout<< '>' << #x << ':' << x << " | " << #y << ':' << y << "\n"
#define T3(a,b,c) cout<<#a<<"="<<(a)<<", "<<#b<<"="<<(b)<<", "<<#c<<"="<<(c)<<"\n"
#define T4(a,b,c,d) cout<<#a<<"="<<(a)<<", "<<#b<<"="<<(b)<<", "<<#c<<"="<<(c)<<", "<<#d<<"="<<(d)<<"\n"
#define ehe ios_base::sync_with_stdio(0);
#define te cin.tie(0);
#define nandayo cout.tie(0);
 
using namespace std;
 
void solve(){
    int n, desiredsum;
    cin >> n;
 
    vector<int> coins(n);
 
    FF(n){
        in(coins[i]);
    }

    cin >> desiredsum;
    vector<int> dp(desiredsum+1, desiredsum+1);
    vector<int> lst(desiredsum+1, -1);
 
    dp[0] = 0;    
 
    for(int i = 1; i <= desiredsum; i++){
        forp(j, 0, n){
            if (coins[j] <= i){
                if(dp[i-coins[j]] + 1 < dp[i]){
                    dp[i] = dp[i-coins[j]] + 1;
                    lst[i] = coins[j];
                }
            }
        }
    }
    if (dp[desiredsum] > desiredsum){
        C(-1);
        return;
    }
    else C(dp[desiredsum]); 


    int tmp = desiredsum;

    // T(lst[tmp]);
    while(tmp > 0){
        cout << lst[tmp] << " ";
        tmp -= lst[tmp];
    }
    
}
 
signed main(){
    ehe te nandayo
    // int x; in(x);
    // while(x--) solve();
    solve();
}