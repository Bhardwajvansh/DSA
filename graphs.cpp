// adjacency matrix and adjacency list
// dense graph = a. matrix
// sparse graph = a. list
// depth first search = stack = parts-preorder,inorder,postorder
// breasth first search = queue


// adjacency matrix

// #include<bits/stdc++.h>
// using namespace std;
 
// int main(){
//     int n,m;
//     cin>>n>>m;
//     int mat[n+1][n+1]={0};
//     for(int i=0;i<m;i++){
//         int u,v;
//         cin>>u>>v;
//         mat[u][v]=1;
//         mat[v][u]=1;
//     }
//     for(int i=0;i<n+1;i++){
//         for(int j=0;j<n+1;j++){
//             cout<<mat[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// adjacency list

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n,m;
//     cin>>n>>m;
//     vector<int> mat[n+1];
//     for(int i=0;i<m;i++){
//         int u,v;
//         cin>>u>>v;
//         mat[u].push_back(v);
//         mat[v].push_back(u);   //  this line is not required when directed graph
//     }
//     for(int i=0;i<n+1;i++){ 
//         for(int j=0;j<n+1;j++){
//             cout<<mat[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// breadth first search

// requires a check list which checks if the the node is already visited
// requires a queue withe the first node...then the neighbours of the node are pushed in it and the queue is emptied element by element and the check list is marked visited and the the elements are stored in teh ans vector
// O(n)+O(2E) (2E->total degrees) for adjacency list and O(n*n) for matrix

// vector<int> bfsOfGraph(int V, vector<int> adj[]) {
//         int check[V]={0};
//         queue<int> q;
//         q.push(0);
//         check[0]=1;
//         vector<int> ans;
//         while(!q.empty()){
//             int node=q.front();
//             q.pop();
//             ans.push_back(node);
//             for(auto i:adj[node]){
//                 if(check[i]!=1) {
//                     q.push(i);
//                     check[i]=1;
//                 }
//             }
//         }
//         return ans;
// }


// Depth first search

// requires a visited list
// a recursive function which adds the element to tha answer array and then runs the recursive function for the element which is at +1 depth and is added to the answer array if its not visited before

// void dfs(vector<int> adj[],int vis[],int ele,vector<int> &ans){
//     ans.push_back(ele);
//     vis[ele]=1;
//     for(auto i:adj[ele]){
//         if(vis[i]!=1) {
//             dfs(adj,vis,i,ans);
//         }
//     }
// }
// vector<int> dfsOfGraph(int V, vector<int> adj[]) {
//     int vis[V]={0};
//     vis[0]=1;
//     vector<int> ans;
//     dfs(adj,vis,0,ans);
//     return ans;
// }
