/*
 * @lc app=leetcode id=416 lang=cpp
 *
 * [416] Partition Equal Subset Sum
 */

// @lc code=start
class Solution {
public:
    bool solve(vector<int> nums, int target){
        int n = nums.size();
        vector<int> curr(target+1,0);
        vector<int> next(target+1,0);
        for(int i = 0; i < n; i++) curr[0] = 1;
        for(int index = n - 1; index >= 0; index--){
            for(int t = 1; t <= target; t++){
                int include = 0;
                if(t - nums[index] >= 0) include = next[t - nums[index]];
                int exclude = next[t];
                curr[t] =  (include or exclude);
            }
            next = curr;
        }
        return curr[target];
    }
    bool canPartition(vector<int>& nums) {
        int sum = accumulate(nums.begin(),nums.end(),0);
        if(sum & 1) return false;
        int target = sum / 2;
        return solve(nums,target);
    }
};
// @lc code=end

