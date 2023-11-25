/*
 * @lc app=leetcode id=931 lang=cpp
 *
 * [931] Minimum Falling Path Sum
 */

// @lc code=start
class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n=matrix.size();
        if(n==1) return matrix[0][0];
        vector<vector<int>> dp(n,vector<int>(n,-1));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==0) dp[0][j]=matrix[0][j];
                else{
                    int low(1e9),lowr(1e9),lowl(1e9);
                    low=matrix[i][j] + dp[i-1][j];
                    if(j>0) lowl=matrix[i][j] + dp[i-1][j-1];
                    if(j<n-1) lowr=matrix[i][j] + dp[i-1][j+1];
                    dp[i][j]=min(low,min(lowl,lowr));
                }
            }
        }
        int mn=1e9;
        for(int i=0;i<n;i++){
            mn=min(mn,dp[n-1][i]);       
        }
        return mn;
    }
};
// @lc code=end

