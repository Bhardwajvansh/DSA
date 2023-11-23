/*
 * @lc app=leetcode id=64 lang=cpp
 *
 * [64] Minimum Path Sum
 */

// @lc code=start
class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> dp(n,vector<int>(m,-1));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i==0 && j==0) dp[i][j]=grid[i][j];
                else{
                    int left(9999),up(9999);
                    if(i>0) left=grid[i][j]+dp[i-1][j];
                    if(j>0) up=grid[i][j]+dp[i][j-1];
                    dp[i][j]=min(left,up);
                    // dp[i][j]=min(grid[i][j]+dp[i-1][j],grid[i][j]+dp[i][j-1]);
                }
            }
        }
        // return path(grid,n-1,m-1,dp);
        return dp[n-1][m-1];
    }
};
// @lc code=end

