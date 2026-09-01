class Solution {
public:
    int fib(int n) {
        vector<int> dp(n+1,-1);
        return ans(n,dp);
    }

    int ans(int n , vector<int>& dp){
        if(n==0) return 0;
        if(n==1) return 1;
        if(dp[n]!=-1) return dp[n];
        return dp[n]=ans(n-1,dp)+ans(n-2,dp);
    }
};