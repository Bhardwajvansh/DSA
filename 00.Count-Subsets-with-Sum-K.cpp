// int path(vector<int> arr,vector<vector<int>> dp,int n,int k){
// 	if(k==0) return 1;
// 	if(n==0){
// 		if(k==arr[0]) return 1;
// 		else return 0;	
// 	} 
// 	if(dp[n][k]!=-1) return dp[n][k];
// 	int nott=path(arr,dp,n-1,k);
// 	int taken = 0;
// 	if(arr[n]<=k) taken = path(arr,dp,n-1,k-arr[n]);
// 	return dp[n][k]=taken+nott;
// }
int findWays(vector<int>& arr, int k)
{
	int MOD = 1e9+7;
	int n = arr.size();
	vector<vector<int>> dp(n,vector<int>(k+1,0));
	for(int i=0; i<n; i++) dp[i][0] = 1;
	if(arr[0]<=k) dp[0][arr[0]] = 1;
	for(int ind=1; ind<n; ind++){
		for(int target=1;target<=k; target++){
			int take=0,not_take=0;
			not_take = dp[ind-1][target]%MOD;
			if(arr[ind] <= target)
				take = dp[ind-1][target-arr[ind]]%MOD;
			dp[ind][target] = (take + not_take)%MOD;
		}
	}
	return dp[n-1][k];
}
