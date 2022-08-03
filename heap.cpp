// a complete binary tree which satisfies a heap's property
// two types -> max heap and min heap
// max heap- the children must have a lesser value than the parent 
// min heap- the parent must have a lesser value than the children 

// properties
// implemented using arrays - level order representation
// nodes-i
// parent of any node-floor(i/2)
// left child - i*2
// right child - (i*2)+1

// delete and insert in O log(n)

// declaring using STL maxheap- priority_queue<int,vector<int>> 
//                     minheap- priority_queue<int ,vector<int>,greater<int>>

// inserting in heap

// #include<bits/stdc++.h>
// using namespace std;
// void insert(int n,int a[],int x){
//     n+=1;    
//     a[n]=x;
//     int i=n;
//     while(a[i]>a[i/2] && i>1){
//         int t=a[i];
//         a[i]=a[i/2];
//         a[i/2]=t;
//         i=i/2;
//     }
//     for(int i=1;i<=n;i++) cout<<a[i]<<" ";
// }
// int main(){
//     int h[]={0,50,40,45,30,20,25,10};
//     insert(7,h,45);
//     cout<<endl;
//     insert(8,h,100);
//     cout<<endl;
//     insert(9,h,150);
// //         150
// //      100    45 
// //   45    50 25  10
// //30  40 20
//     return 0;
// }


// deleting in heap (in heap we delete only the root node)
// #include<bits/stdc++.h>
// using namespace std;
// void del(int a[],int n){
//     a[1]=a[n];
//     n-=1;
//     int i=1;
//     while(i<n){
//         int lef=a[2*i];
//         if(2*i>n) lef=0;
//         int rig=a[(2*i)+1];
//         if(2*i+1>n) rig=0;
//         if(rig==0 && lef==0 ) return;
//         int lar=lef>rig?2*i:(2*i)+1;
//         if(a[i]<a[lar]){
//             int t=a[i];
//             a[i]=a[lar];
//             a[lar]=t;
//             i=lar;
//         }
//         else return;
//     }

// }
// int main(){
//     int a[]={0,40,30,10,20,15,9,8};
//     int n=7;
//     del(a,n);
//     for(int i=1;i<n;i++) cout<<a[i]<<" "; 
// //      30
// //   20    10
// // 8  15  9
//     return 0;
// }

// heapify algorith - O n

// #include<bits/stdc++.h>
// using namespace std;
// void heapy(int a[],int n,int i){
//     int large=i;
//     int l=2*i;
//     int r=2*i+1;
//     if(l<=n && a[l]>a[large]) large=l;
//     if(r<=n && a[r]>a[large]) large=r;
//     if(large!=i){
//         int t=a[i];
//         a[i]=a[large];
//         a[large]=t;
//         heapy(a,n,large);
//     }
// }
// void built(int a[],int n){
//     for(int i=n/2;i>0;i--) heapy(a,n,i);
// }
// int main(){
//     int a[]={0,10,30,50,20,35,15};
//     int n=6;
//     built(a,n);
//     for(int i=1;i<=n;i++) cout<<a[i]<<" ";
//     return 0;
// }


// heap sort -> convert array to heap -> delete first elemet and make it a heap again -> do this untill u get a sorted array

// #include<bits/stdc++.h>
// using namespace std;
// void heapy(int a[],int n,int i){
//     int lar=i;
//     int l=2*i;
//     int r=2*i+1;
//     if(l<=n && a[l]>a[lar]) lar=l;
//     if(r<=n && a[r]>a[lar]) lar=r;
//     if(lar!=i){
//         int t=a[lar];
//         a[lar]=a[i];
//         a[i]=t;
//         heapy(a,n,lar);
//     }
// }
// void heapsort(int a[],int n){
//     for(int i=n;i>0;i--){
//         int t=a[1];
//         a[1]=a[i];
//         a[i]=t;
//         heapy(a,i-1,1);
//     }
// }
// void convert(int a[],int n){
//     for(int i=n/2;i>0;i--) heapy(a,n,i);
// }
// int main(){
//     int a[]={0,40,10,30,50,60,15};
//     int n=6;
//     convert(a,n);   
//     heapsort(a,n);
//     for(int i=1;i<=n;i++) cout<<a[i]<<" ";
//     return 0;
// }


// heap can be implemented in STL using priority_queue -> by default max heap -> use - to implement min heap 

// kth largest element
// #include<bits/stdc++.h>
// using namespace std;
 
// int main(){
//     priority_queue <int> pq;
//     int a[]={20,10,60,30,50,40,100,110};
//     sort(a,a+7);
//     for(int i=7;i>7-3;i--) pq.push(-a[i]);
//     cout<<pq.top()<<endl;
//     return 0;
// }


// connect n ropes to get minimum cost 
// every step choose 2 min ropes and add

// #include<bits/stdc++.h>
// using namespace std;
 
// int main(){
//     int a[]={2,5,4,8,6,9};
//     priority_queue <int> qp;
//     for(int i=0;i<6;i++) qp.push(-a[i]);
//     int ans=0;
//     while(qp.size()!=1){
//         int y=0;
//         int x=qp.top();
//         y=y-x;
//         qp.pop();
//         x=qp.top();
//         y=y-x;
//         qp.pop();
//         ans+=y;
//         qp.push(-y);
//     }
//     cout<<ans<<endl;
//     return 0;
// }

// find median with every 

// #include<bits/stdc++.h>
// using namespace std;
// priority_queue<int,vector<int>> mx;
// priority_queue<int,vector<int>,greater<int>> mn;
// void insert(int n){
//     if(mn.size()==mx.size()){
//         if(mx.size()==0) {mx.push(n); return;}
//         if(n<=mx.top()) mx.push(n);
//         else mn.push(n);
//     }
//     else{
//         if(mx.size()>mn.size()){
//             if(n>=mx.top()) mn.push(n);
//             else {
//                 int t=mx.top();
//                 mx.pop();
//                 mn.push(t);
//                 mx.push(n);
//             }
//         }
//         else{
//             if(n<=mn.top()) mx.push(n);
//             else{
//                 int t=mn.top();
//                 mn.pop();
//                 mx.push(t);
//                 mn.push(n);
//             }
//         }
//     }
// }
// float median(){
//     if(mn.size()==mx.size()) return (mn.top()+mx.top())/2.0;
//     else if(mx.size()>mn.size()) return mx.top();
//     else return mn.top();
// }
// int main(){
//     int n;
//     cin>>n;
//     while(n--){
//         int a;
//         cin>>a;
//         insert(a);
//         cout<<median()<<endl;
//     }
//     return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;
// priority_queue<int ,vector<int>> mx; 
// priority_queue<int ,vector<int>,greater<int>> mn; 
// void insert(int n){
//     if(mx.size()==mn.size()){
//         if(mx.size()==0) mx.push(n);
//         if(mx.top()>=n) mx.push(n);
//         else mn.push(n);
//     }
//     else{
//         if(mn.size()>mx.size()){
//             if(mn.top()>=n) mx.push(n);
//             else{
//                 int t=mn.top();
//                 mn.pop();
//                 mx.push(t);
//                 mn.push(n);
//             }
//         }
//         else{
//             if(mx.top()<=n) mn.push(n);
//             else{
//                 int t=mx.top();
//                 mx.pop();
//                 mn.push(t);
//                 mx.push(n);
//             }
//         }
//     }
// }
// float median(){
//     if(mn.size()==mx.size()) return (mn.size()==mx.size())/2.0;
//     else if(mn.size()>mx.size()) return mn.top();
//     else return mx.top();
// }
// int main(){
//     int n;
//     cin>>n;
//     while(n--){
//         int a;
//         cin>>a;
//         insert(a);
//         cout<<median()<<endl;       
//     }
//     return 0;
// }

// 6 12 4 5 3 8 7 

// #include<bits/stdc++.h>
// using namespace std;
// priority_queue<int,vector<int>> mx;
// priority_queue<int,vector<int>,greater<int>> mn;
// void insert(int n){
//     if(mn.size()==mx.size()){
//         if(mx.size()==0) {mx.push(n); return;}
//         if(n<=mx.top()) mx.push(n);
//         else mn.push(n);
//     }
//     else{
//         if(mx.size()>mn.size()){
//             if(n>=mx.top()) mn.push(n);
//             else {
//                 int t=mx.top();
//                 mx.pop();
//                 mn.push(t);
//                 mx.push(n);
//             }
//         }
//         else{
//             if(n<=mn.top()) mx.push(n);
//             else{
//                 int t=mn.top();
//                 mn.pop();
//                 mx.push(t);
//                 mn.push(n);
//             }
//         }
//     }
// }
// float median(){
//     if(mx.size()==mn.size()) return (mx.top()+mn.top())/2.0;
//     else if(mx.size()>mn.size()) return mx.top();
//     else return mn.top();
// }
// int main(){
//     insert(6);
//     cout<<median()<<endl;
//     insert(5);
//     cout<<median()<<endl;
//     insert(7);
//     cout<<median()<<endl;
//     return 0;
// }


// merging k sorted arrays

// add the starting elements of all the sorted arrays to the min?max heap;
// take out the min element and add it to ans vector
// add the next element of that same array to the heap and do the same untill the heap is empty;

// #include<bits/stdc++.h>
// using namespace std;
 
// int main(){
//     int k;
//     cin>>k;
//     vector<vector<int>> a(k);
//     for(int i=0;i<k;i++){
//         int n;
//         cin>>n;
//         a[i]=vector<int>(n);
//         for(int j=0;j<n;j++){
//             cin>>a[i][j];
//         }
//     }
//     // for(int i=0;i<k;i++){
//     //     for(int j=0;j<a[i].size();j++) cout<<a[i][j]<< " ";
//     //     cout<<endl;
//     // }
//     vector<int> idx(k,0);
//     priority_queue <pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> hp;
//     vector<int> ans;
//     for(int i=0;i<k;i++){
//         hp.push({a[i][0],i});
//     }
//     while(!hp.empty()){
//         pair<int,int> x=hp.top();
//         hp.pop();
//         ans.push_back(x.first);
//         if(idx[x.second]+1<a[x.second].size()){
//             hp.push({a[x.second][idx[x.second]+1],x.second});
//         }
//         idx[x.second]+=1;
//     }
//     for(int i=0;i<ans.size();i++){
//         cout<<ans[i]<<" ";
//     }
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
 
// int main(){
//     int k;
//     cin>>k;
//     vector<vector<int>> a(k);
//     for(int i=0;i<k;i++){
//         int n;
//         cin>>n;
//         a[i]=vector<int>(n,0);
//         for(int j=0;j<n;j++){ cin>>a[i][j];}
//     }
//     priority_queue<pair<int,int> , vector<pair<int,int>>,greater<pair<int,int>>> hp;
//     vector<int> ans;
//     vector<int> ind(k,0);
//     for(int i=0;i<k;i++){
//         hp.push({a[i][0],i});
//     }
//     while(!hp.empty()){
//         pair<int,int> x=hp.top();
//         hp.pop();
//         // x.first = value ; x.second = array number
//         ans.emplace_back(x.first);
//         if(ind[x.second]+1<a[x.second].size()){
//             hp.push({a[x.second][ind[x.second]+1],x.second});
//         }
//         ind[x.second]+=1;
//     }
//     for(int i=0;i<ans.size();i++){
//         cout<<ans[i]<<" ";
//     }
//     return 0;
// }

// in reverse order
// #include<bits/stdc++.h>
// using namespace std;
 
// int main(){
//     int k;
//     cin>>k;
//     vector<vector<int>> a(k);
//     vector<int> ind(k,0);
//     for(int i=0;i<k;i++){
//         int n;
//         cin>>n;
//         a[i]=vector<int>(n);
//         for(int j=0;j<n;j++) cin>>a[i][j];
//         ind[i]=a[i].size()-1;
//     }
//     // for(int i=0;i<k;i++){
//     //     for(int j=a.size()-1;j>=0;j++) cout<<a[i][j]<< " ";
//     //     cout<<endl;
//     // }
//     priority_queue<pair<int,int>,vector<pair<int,int>>> hp;
//     vector<int> ans;    
//     for(int i=0;i<k;i++) hp.push({a[i][a[i].size()-1],i});
//     while(!hp.empty()){
//         pair<int,int> x=hp.top();
//         hp.pop();
//         ans.push_back(x.first);
//         if(ind[x.second]-1>=0){
//             hp.push({a[x.second][ind[x.second]-1],x.second});
//         }
//         ind[x.second]-=1;
//     }
//     for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";
//     return 0;
// }