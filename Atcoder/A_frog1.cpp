#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define FORE(i, a, b) for(int i = a; i <= b; i++)

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
    // take inputs
    int n;
    cin >> n;
    vector<int> v(n);
    FOR(i, 0, n) {
        cin >> v[i];
    }
    
    // make the dp array, n and n+1 both works for this problem
    vector<int> dp(n);
    dp[0] = 0; // first case we already know
    dp[1] = abs(v[1] - v[0]); // second case we already know
    
    // loop to < n because n is the number of elements <- this problem
    // loop to <= if n is the final position
    FOR(i, 2, n) { 
        dp[i] = min(dp[i-1] + abs(v[i] - v[i-1]), 
                    dp[i-2] + abs(v[i] - v[i-2]));
    // to reach i, we can come from point i-1 or i-2
    // +abs(...) because of the cost to get to that point
    }
    cout << dp[n-1]; // dp[n-1] because the index starts at 0, -1 to get the correct index for the number of stones
}
