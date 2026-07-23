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
    int n;
    cin >> n;
    vector<int> a(n), b(n), c(n);
    FOR(i, 0, n) {
        cin >> a[i];
        cin >> b[i];
        cin >> c[i];
    }
    
    // dp[days][activities]
    vector<vector<int>> dp(n, vector<int>(3));
    
    // base cases for A, B, and C
    dp[0][0] = a[0];
    dp[0][1] = b[0];
    dp[0][2] = c[0];

    FOR(i, 1, n) {
        dp[i][0] = max(dp[i-1][1], dp[i-1][2]) + a[i];
        dp[i][1] = max(dp[i-1][0], dp[i-1][2]) + b[i];
        dp[i][2] = max(dp[i-1][0], dp[i-1][1]) + c[i];
    }
    int ans = max({dp[n-1][0], dp[n-1][1], dp[n-1][2]});
    cout << ans;
}

// Explain the loop:
// A today <- max(B yesterday, C yesterday)
// B today <- max(A yesterday, C yesterday)
// C today <- max(A yesterday, B yesterday) 
