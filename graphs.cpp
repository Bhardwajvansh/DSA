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


// number of provinces

// void dfs(int node,vector<int>&vis,vector<int>list[]){
//         vis[node]=1;
//         for(auto it:list[node]){
//             if(vis[it]==0){
//                 dfs(it,vis,list);
//             }
//         }
//     }
//     int numProvinces(vector<vector<int>> adj, int V) {
//         vector<int>list[V];
//         for(int i=0;i<V;i++){
//             for(int j=0;j<V;j++){
//                 if(i!=j && adj[i][j]==1){
//                     list[i].push_back(j);
//                     list[j].push_back(i);
//                 }
//             }
//         }
//         vector<int>vis(V,0);
//         int cnt=0;
//         for(int i=0;i<V;i++){
//             if(vis[i]==0){
//                 dfs(i,vis,list);
//                 cnt++;
//             }
//         }
//         return cnt;
//     }


// number of islands usinf DFS

// void bfs(vector<vector<int>> &vis,vector<vector<char>> &grid,int row,int col){
//         vis[row][col]=1;
//         int n=grid.size();
//         int m=grid[0].size();
//         queue<pair<int,int>> q;
//         q.push({row,col});
//         while(!q.empty()){
//             int nrow=q.front().first;
//             int ncol=q.front().second;
//             q.pop();
//             for(int i=-1;i<=1;i++){
//                 for(int j=-1;j<=1;j++){
//                     int lrow=nrow+i;
//                     int lcol=ncol+j;
//                     if(lrow<n && lrow>=0 && lcol<m && lcol>=0 && grid[lrow][lcol]=='1' && vis[lrow][lcol]!=1){
//                         vis[lrow][lcol]=1;
//                         q.push({lrow,lcol});
//                     }
//                 }
//             }
//         }
//     }
//     int numIslands(vector<vector<char>>& grid) {
//         int n=grid.size();
//         int m=grid[0].size();
//         vector<vector<int>> vis(n,vector<int>(m,0));
//         int ans=0;
//         for(int i=0;i<n;i++){
//             for(int j=0;j<m;j++){
//                 if(grid[i][j]=='1' && vis[i][j]!=1){
//                     ans++;
//                     bfs(vis,grid,i,j);
//                 }
//             }
//         }
//         return ans;
        
//     }



// number of islands using bfs

// void dfs(vector<vector<char>>& grid,vector<vector<int>>& vis,int i, int j){
//         vis[i][j]=1;
//         int n=grid.size();
//         int m=grid[0].size();
//         for(int x=-1;x<=1;x++){
//             for(int y=-1;y<=1;y++){
//                 int r=i+x;
//                 int c=j+y;
//                 if(c>=0 and c<=m and r>=0 and r<=n and grid[r][c]=='1' and vis[r][c]==0){
//                     dfs(grid,vis,i,j);
//                 }
//             }
//         }
//     }
//     int numIslands(vector<vector<char>>& grid) {
//         int ans=0;
//         int n=grid.size();
//         int m=grid[0].size();
//         vector<vector<int>> vis(n,vector<int>(m,0));
//         for(int i=0;i<n;i++){
//             for(int j=0;j<m;j++){
//                 if(grid[i][j]=='1' and vis[i][j]==0){
//                     dfs(grid,vis,i,j);
//                     ans++;
//                 }
//             }
//         }
//         return ans;
//     }