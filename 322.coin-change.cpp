/*
 * @lc app=leetcode id=322 lang=cpp
 *
 * [322] Coin Change
 */

// @lc code=start
class Solution {
public:
    int solve(vector<int> arr,int n,int t,vector<vector<int>> dp){
        if(n==0){
            if(t%arr[0]==0) return t/arr[0];
            else return 1e9;
        }
        if(dp[n][t]!=-1) return dp[n][t];
        int nott = solve(arr,n-1,t,dp);
        int take = 1e9;
        if(t>=arr[n]) take=1+solve(arr,n,t-arr[n],dp);
        return dp[n][t]=min(take,nott);
    }
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        vector<vector<int>> dp(n,vector<int>(amount+1,-1));
        // int ans = solve(coins,n-1,amount,dp);   
        for(int i=0;i<=amount;i++) {
            if(i%coins[0]==0) dp[0][i] = i/coins[0];
            else dp[0][i] = 1e9;
        }
        for(int i=1;i<n;i++){
            for(int j=0;j<=amount;j++){
                int nott = dp[i-1][j];
                int take = 1e9;
                if(j>=coins[i]) take = 1 + dp[i][j-coins[i]];
                dp[i][j] = min(take,nott);
            }
        }
        if(dp[n-1][amount]>=1e9) return -1;
        else return dp[n-1][amount];
    }
};
// @lc code=end

