/*
 * @lc app=leetcode id=198 lang=cpp
 *
 * [198] House Robber
 */

// @lc code=start
class Solution {
public:
    int func(int n,vector<int>& v,vector<int>& dp){
        if(n==0) return v[n];
        if(n<0) return 0;
        if(dp[n]!=-1) return dp[n];
        int pick=v[n]+func(n-2,v,dp);
        int notp=func(n-1,v,dp);
        return dp[n]=max(pick,notp);
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n,-1);
        return func(n-1,nums,dp);
    }
};
// @lc code=end

