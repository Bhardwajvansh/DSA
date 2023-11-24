/*
 * @lc app=leetcode id=120 lang=cpp
 *
 * [120] Triangle
 */

// @lc code=start
class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        vector<vector<int>> dp(n,vector<int>(n,-1));
        for(int i=0;i<n;i++){
            dp[n-1][i]=triangle[n-1][i];
        }
        for(int i=n-2;i>=0;i--){
            for(int j=i;j>=0;j--){
                int low=triangle[i][j]+dp[i+1][j];
                int lowr=triangle[i][j]+dp[i+1][j+1];
                dp[i][j]=min(low,lowr);
            }
        }
        return dp[0][0];
    }
};
// @lc code=end

