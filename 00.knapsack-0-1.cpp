#include <bits/stdc++.h> 
int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) 
{
	vector<vector<int>> dp(n,vector<int>(maxWeight+1,0));
    for (int i = weight[0]; i <= maxWeight; i++) dp[0][i] = value[0]; 
	for(int i=1;i<n;i++){
		for(int j=0;j<=maxWeight;j++){
			int take = -1e9;
			if(j>=weight[i]) take = value[i] + dp[i-1][j-weight[i]];
			int nott = dp[i-1][j];
			dp[i][j] = max(take,nott);
		}
	}
	return dp[n-1][maxWeight];
}