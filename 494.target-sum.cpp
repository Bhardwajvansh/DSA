/*
 * @lc app=leetcode id=494 lang=cpp
 *
 * [494] Target Sum
 */

// @lc code=start
class Solution {
public:
    int solve(vector<int> nums,int n,int t,vector<vector<int>> dp){
        if(n==0){
            if(nums[0] == 0 && t==0) return 2;
            if(nums[0] == t || sum==0) return 1;
            return 0;
        } 
        if(dp[n][t]!=-1) return dp[n][t];
        int take=0,nott=0;
        if(nums[n]>=t) take = solve(nums,n-1,t-nums[n],dp);
        nott = solve(nums,n-1,t,dp);
        return nott+take;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int n = nums.size(); int sum=0;
        for(int i=0;i<n;i++) sum+=nums[i];
        if((sum+target)%2!=0) return 0;
        sum = (sum+target)/2;
        vector<vector<int>> dp(n,vector<int>(sum+1,-1));
        return solve(nums,n-1,sum,dp);
    }
};
// @lc code=end

