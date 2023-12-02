#include <bits/stdc++.h> 
int countPartitions(int n, int d, vector<int> &arr) {
    // int sum=0;
    // int mod = 1e9+7;
    // for(int i=0;i<n;i++) sum+=arr[i];
    // if(sum-d<0 || (sum-d)%2!=0) return 0;
    // sum=(sum-d)/2;
    // vector<vector<int>> dp(n,vector<int>(sum+1,-1));
    // if(arr[0]==0) dp[0][0]=2;
    // else dp[0][0]=1;
    // if(arr[0]!=0 && arr[0]<=sum) dp[0][arr[0]]=1;
    // for(int i=1;i<n;i++){
    //     for(int j=1;j<=sum;j++){
    //         int taken = 0,nott = 0;
    //         nott = dp[i-1][j];
    //         if(arr[i]<=j) taken = dp[i-1][j-arr[i]];
    //         dp[i][j]=(nott + taken)%mod;
    //     }
    // }
    // cout<<n<<" "<<sum<<endl;
    // for(int i=0;i<n;i++){
    //     for (int j = 0; j <= sum; j++) {
    //         cout<<dp[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // return dp[n-1][sum];
    int sum=0;
    int mod=(int)1e9+7;
    for(int i:arr)sum=(sum+i)%(int)(1e9+7);
    int s1=(d+sum)/2;
    if((d+sum)%2 != 0) return 0;
    vector<vector<int>>dp(n+1,vector<int>(s1+1,0));
    for(int i=0;i<=n;i++){
        dp[i][0]=1;
    }
    for(int i=1;i<=n;i++){
        for(int j=0;j<=s1;j++){
            if(arr[i-1]<=j)dp[i][j]=(dp[i-1][j]%mod+dp[i-1][j-arr[i-1]]%mod)%mod;
            else dp[i][j]=dp[i-1][j]%mod;
        }
    }
    return dp[n][s1]%mod;   
}


