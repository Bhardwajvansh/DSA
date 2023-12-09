/*
 * @lc app=leetcode id=494 lang=cpp
 *
 * [494] Target Sum
 */

// @lc code=start
class Solution {
public:
    int f(int index, int target, vector<int> &nums, vector<vector<int>> &dp){
        if (index==0) {
            if (target==0 && nums[index]==0) return 2;
            if (nums[index]==target || target==0) return 1;
            return 0;
        }
        if(dp[index][target]!=-1) return dp[index][target];
        int Pick=0;
        if (nums[index]<=target) Pick=f(index-1, target-nums[index], nums, dp);
        int notPick=f(index-1, target, nums, dp);
        return dp[index][target] = Pick+notPick;

    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int sum=accumulate(nums.begin(), nums.end(), 0);
        int k=(sum-target);
        if (k<0 || k%2!=0){
            return 0;
        }
        int n=nums.size();
        vector<vector<int>> dp(n, vector<int> (k+1, -1));
        int ans= f(n-1, k/2, nums, dp);
        for(int i=0;i<n;i++){
            for(int j=0;j<k+1;j++){
                cout<<dp[i][j]<<" ";
            }
            cout<<endl;
        }
        return ans;
        // return tab(n, k/2, nums);
    }
};
// @lc code=end

