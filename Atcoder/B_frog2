#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define FORE(i, a, b) for(int i = a; i <= b; i++)
#define FORLL(i, a, b) for(ll i = a; i < b; i++)
#define FORD(i, a, b) for(int i = a; i > b; i--)
#define INF 2e9 // 2e9
#define INFLL 2e18 // 2e18
#define esp 1e-9
#define PI 3.14159265

inline ll GCD(ll a, ll b) {while (b != 0) {ll c = a % b; a = b; b = c;} return a;};
inline ll LCM(ll a, ll b) {return (a / GCD(a,b)) * b;};

void solve();

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    FOR(i, 0, n) {
        cin >> v[i];
    }

    vector<int> dp(n+1);
    dp[0] = 0;

    FOR(i, 1, n) {
        dp[i] = INF; // starts with a large number so the min(...) below can calculate the actual min
        FORE(j, 1, k) {
            if(i - j < 0) { // if i - j is negative, the stone doesn't exist
                break;
            } 
            dp[i] = min(dp[i], dp[i-j] + abs(v[i] - v[i-j]));
        }
    }
    cout << dp[n-1];
}
