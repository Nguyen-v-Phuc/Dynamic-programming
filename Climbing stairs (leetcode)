class Solution {
public:
    int climbStairs(int n) {
        if(n <= 1) return 1;

        std::vector<int> dp(n+1); 
        // THIS is the dp array. +1 because we need 0 -> n, not 1 -> n
        // dp[i] = number of ways to reach step i
        
        dp[0] = 1; // first case we already know
        dp[1] = 1; // second case we already know

        for(int i = 2; i <= n; i++) { //i <= n to fully compute all steps
            dp[i] = dp[i-1] + dp[i-2]; 
            // to reach point i, we can come from point i-1 or point i-2
        }
        return dp[n];
    }
};
