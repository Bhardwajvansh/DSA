/*
 * @lc app=leetcode id=518 lang=cpp
 *
 * [518] Coin Change II
 */

// @lc code=start
class Solution {
public:
    int solve(vector<int> arr,int n,int m,vector<vector<int>> dp){
        if(n==0){
            if(m%arr[0]==0) return 1;
            return 0; 
        }
        if(dp[n][m]!=-1) return dp[n][m];
        int take = 0;
        if(m>=arr[n]) take = solve(arr,n,m-arr[n],dp);
        int nott = solve(arr,n-1,m,dp);
        return dp[n][m] = nott + take;
    }
    int change(int amount, vector<int>& coins) {
        int n = coins.size();
        vector<vector<int>> dp(n,vector<int>(amount+1,-1));
        for(int i=0;i<=amount;i++) {
            if(i%coins[0]==0) dp[0][i]=1;
            else dp[0][i]=0;
        }
        for(int i=1;i<n;i++){
            for(int j=0;j<=amount;j++){
                int take = 0;
                if(j>=coins[i]) take = dp[i][j-coins[i]];
                int nott = dp[i-1][j];
                dp[i][j] = nott + take;
            }
        }
        // return solve(coins,n-1,amount,dp);
        return dp[n-1][amount];
    }
};
// @lc code=end

