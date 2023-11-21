/*
 * @lc app=leetcode id=213 lang=cpp
 *
 * [213] House Robber II
 */

// @lc code=start
class Solution {
public:
    int solve(vector<int> nums,int n){
        vector<int> dp(n+1,-1);
        dp[0]=nums[0];
        for(int i=1;i<n;i++){
            int take=nums[i];
            if(i>1) take+=dp[i-2];
            int dont=dp[i-1];
            dp[i]=max(take,dont);
        }
        return dp[n-1];
    }
    int rob(vector<int>& nums) {
        
        int n=nums.size();
        if(n==1) return nums[0];
        if(n==2) return max(nums[0],nums[1]);
        vector<int> ar1;
        vector<int> ar2;
        for(int i=0;i<n;i++){
            if(i!=n-1) ar1.push_back(nums[i]); 
            if(i!=0) ar2.push_back(nums[i]); 
        }
        return max(solve(ar1,n-1),solve(ar2,n-1));
    }
};
// @lc code=end

