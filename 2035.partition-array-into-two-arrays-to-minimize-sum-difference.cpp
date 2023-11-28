/*
 * @lc app=leetcode id=2035 lang=cpp
 *
 * [2035] Partition Array Into Two Arrays to Minimize Sum Difference
 */

// @lc code=start
class Solution {
public:
    int minimumDifference(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++) sum+=nums[i];
        vector<vector<bool>> dp(n,vector<bool>(sum+1,0));
        for(int i=0;i<n;i++) dp[i][0]=true;
        dp[0][nums[0]]=true;
        for(int i=1;i<n;i++){
            for(int j=1;j<=sum;j++){
                bool nott = dp[i-1][j];
                bool take = false;
                if(nums[i]<=j) take = dp[i-1][j-nums[i]];
                dp[i][j] = take | nott;
            }
        }
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<=sum;j++){
        //         cout<<dp[i][j];
        //     }
        //     cout<<"\n";
        // }

        int ans = 1e9;
        for(int i=0;i<=sum;i++){
            if(dp[n-1][i]){
                int fh = i;
                int sh = sum - i;
                ans = min(ans, abs(fh-sh));
            }
        }
        return ans;
    }
};
// @lc code=end

