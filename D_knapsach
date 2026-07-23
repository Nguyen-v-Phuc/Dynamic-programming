#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define FORE(i, a, b) for(int i = a; i <= b; i++)
#define FORLL(i, a, b) for(ll i = a; i < b; i++)
#define FORELL(i, a, b) for(ll i = a; i <= b; i++)
#define FORD(i, a, b) for(int i = a; i > b; i--)
#define INF 2e9 // 2e9
#define INFLL 2e18 // 2e18
#define esp 1e-9
#define PI 3.14159265
 
inline ll GCD(ll a, ll b) {while (b != 0) {ll c = a % b; a = b; b = c;} return a;};
inline ll LCM(ll a, ll b) {return (a / GCD(a,b)) * b;};
 
void knapsack()
{
    ll n, w;
    cin >> n >> w;
    
    vector<vector<ll>> arr(n, vector<ll>(2, 0));
    
    FOR(i, 0, n) {
        FOR(j, 0, 2) {
            cin >> arr[i][j];
        }
    }
    
    vector<vector<ll>> dp(n + 1, vector<ll>(w + 1, 0));
    dp[0][0] = 0; // base
    
    // arr[i - 1][0]     weight
    // arr[i - 1][1]     value
    
    // FORELL to not skip the last ones
    FORELL(i, 1, n) {
        ll weight = arr[i-1][0];
        ll value = arr[i-1][1];
        
        FORELL(j, 1, w) {
            if(weight <= j) {
                dp[i][j] = max(dp[i-1][j], value + dp[i-1][j-weight]);
                // take max of skip and take items
                // j-weight is the remaining capacity
            }
            else {
                dp[i][j] = dp[i-1][j]; // if can't fit, leave it
            }
        }
    }
    cout << dp[n][w];
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    knapsack();
    return 0;
}
