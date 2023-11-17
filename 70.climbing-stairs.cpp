/*
 * @lc app=leetcode id=70 lang=cpp
 *
 * [70] Climbing Stairs
 */

// @lc code=start
class Solution {
public:
    int climbStairs(int n) {
        vector<int> dp(n+1,-1);
        for(int i=0;i<=n;i++){
            if(i<2) dp[i]=1;
            else dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[n];
    }
};
// @lc code=end

