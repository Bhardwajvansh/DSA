/*
 * @lc app=leetcode id=509 lang=cpp
 *
 * [509] Fibonacci Number
 */

// @lc code=start
class Solution {
public:
    int fib(int n) {
       vector<int> dp(n+1,-1);
       for(int i=0;i<=n;i++){
        if(i<2) dp[i]=i;
        else dp[i]=dp[i-1]+dp[i-2];
       } 
       return dp[n];
    }
};
// @lc code=end

