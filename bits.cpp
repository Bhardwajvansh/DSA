// number of set bits

// #include<bits/stdc++.h>
// using namespace std;
// int count(int n){
//     int ans=0;
//     while(n>0){
//         n=n&(n-1);
//         ans++;
//     }
//     return ans;
// }
// int main(){
//     int n;
//     cin>>n;
//     int ans=0;
//     for(int i=1;i<=n;i++){
//         ans+=count(i);
//     }
//     cout<<ans;
//     return 0;
// }

// counting set bits ins an aray


// #include<bits/stdc++.h>
// using namespace std;
// int count(int n){
//     int ans=0;
//     while(n>0){
//         n=n&(n-1);
//         ans++;
//     }
//     return ans;
// }
// int main(){
//     int a[7]={1,8};
//     int ans=0;
//     for(auto i : a){
//         ans+=count(i);
//     }
//     cout<<ans;
//     return 0;
// }

// next higher number with same number of set bits

// #include<bits/stdc++.h>
// using namespace std;
// int count(int n){
//     int ans=0;
//     while(n>0){
//         n=n&(n-1);
//         ans++;
//     }
//     return ans;
// }
// int main(){
//     int n;
//     cin>>n;
//     int x=count(n);
//     int ans=0;
//     while(ans!=x){ans=count(n+1); n++;}
//     cout<<n;
//     return 0;
// }       