// maximum nodes at any level = 2^ (level) levels=0,1,2,3,.....
// maximum possible in a binary tree of height h = (2^h)-1 h=1,2,3,4....

// #include<bits/stdc++.h>
// using namespace std;
 
// struct node{
//     int data;
//     node * right;
//     node * left;
//     node(int val){
//         data=val;
//         right=NULL;
//         left=NULL;
//     }       
// };
// int main(){
//     node * root=new node(1);
//     root->right=new node(2);
//     root->left=new node(3);
//     return 0;
// }


// preorder traversal

// #include<bits/stdc++.h>
// using namespace std;
// class node{
//     public:
//     int data;
//     node* left;
//     node* right;
//     node(int val){
//         data=val;
//         left=NULL;
//         right=NULL;
//     }
// };

// void preorder(node* root){
//     if(root==NULL) return;
//     cout<<root->data<<" ";
//     preorder(root->left);
//     preorder(root->right);
// }
// int main(){
//     node * root=new node(1);
//     root->left=new node(2);
//     root->right=new node(3);
//     root->left->left=new node(4);
//     root->left->right=new node(5);
//     root->right->left=new node(6);
//     root->right->right=new node(7);
//     preorder(root);
//     return 0;
// }


// inorder 


// #include<bits/stdc++.h>
// using namespace std;
// class node{
//     public:
//     int data;
//     node* left;
//     node* right;
//     node(int val){
//         data=val;
//         left=NULL;
//         right=NULL;
//     }
// };

// void preorder(node* root){
//     if(root==NULL) return;
//     preorder(root->left);
//     cout<<root->data<<" ";
//     preorder(root->right);
// }
// int main(){
//     node * root=new node(1);
//     root->left=new node(2);
//     root->right=new node(3);
//     root->left->left=new node(4);
//     root->left->right=new node(5);
//     root->right->left=new node(6);
//     root->right->right=new node(7);
//     preorder(root);
//     return 0;
// }

// postorder

// #include<bits/stdc++.h>
// using namespace std;
// class node{
//     public:
//     int data;
//     node* left;
//     node* right;
//     node(int val){
//         data=val;
//         left=NULL;
//         right=NULL;
//     }
// };

// void preorder(node* root){
//     if(root==NULL) return;
//     preorder(root->left);
//     preorder(root->right);
//     cout<<root->data<<" ";
// }
// int main(){
//     node * root=new node(1);
//     root->left=new node(2);
//     root->right=new node(3);
//     root->left->left=new node(4);
//     root->left->right=new node(5);
//     root->right->left=new node(6);
//     root->right->right=new node(7);
//     preorder(root);
//     return 0;
// }


// binary tree using preorder and inorder

// pick elements from preorder and make node of it;
// search that element in inorder

// #include<bits/stdc++.h>
// using namespace std;
// class node{
//     public:
//     int data;
//     node* left;
//     node* right;
//     node(int val){
//         data=val;
//         left=NULL;
//         right=NULL;
//     }
// };
// int search(int ino[],int i,int j,int c){
//     for(int x=i;x<=j;x++){
//         if(ino[x]==c) return x;
//     }
// }
// node * built(int pre[],int ino[],int i,int j){
//     static int ind=0;
//     if(i>j) return NULL;
//     int c=pre[ind];
//     ind++;
//     node * n=new node(c);
//     if(i==j) return n;
//     int pos=search(ino,i,j,c);
//     n->left=built(pre,ino,i,pos-1);
//     n->right=built(pre,ino,pos+1,j);
// }
// void inoprint(node * root){
//     if(root==NULL) return;
//     inoprint(root->left);
//     cout<<root->data<<" ";
//     inoprint(root->right);
// }
// int main(){
//     int pre[]={1,2,4,3,5};
//     int ino[]={4,2,1,5,3};
//     node * root=built(pre,ino,0,4);
//     inoprint(root);
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// class node{
//     public:
//     int data;
//     node* left;
//     node* right;
//     node(int val){
//         data=val;
//         left=NULL;
//         right=NULL;
//     }
// };
// int search(int pre[],int a,int b,int c){
//     for(int i=a;i<=b;i++){
//         if(pre[i]==c) return i;
//     }
// }
// node * built(int pre[],int ino[],int i,int j){
//     if(i>j) return NULL;
//     static int ind=0;
//     int c=pre[ind];
//     ind++;
//     node * n=new node(c);
//     if(i==j) return n;
//     int pos=search(ino,i,j,c);
//     n->left=built(pre,ino,i,pos-1);
//     n->right=built(pre,ino,pos+1,j);
// }
// void inoprint(node * root){
//     if(root==NULL) return;
//     inoprint(root->left);
//     cout<<root->data<<" ";
//     inoprint(root->right);
// }
// int main(){
//     int pre[]={1,2,4,3,5};
//     int ino[]={4,2,1,5,3};
//     node * root=built(pre,ino,0,4);
//     inoprint(root);
//     return 0;
// }

// tree from postorder and inorder binary tree


// #include<bits/stdc++.h>
// using namespace std;
// class node{
//     public:
//     int data;
//     node* left;
//     node* right;
//     node(int val){
//         data=val;
//         left=NULL;
//         right=NULL;
//     }
// };
// int search(int pre[],int a,int b,int c){
//     for(int i=a;i<=b;i++){
//         if(pre[i]==c) return i;
//     }
// }
// node * built(int pre[],int ino[],int i,int j){
//     if(i>j) return NULL;
//     static int ind=4;
//     int c=pre[ind];
//     ind--;
//     node * n=new node(c);
//     if(i==j) return n;
//     int pos=search(ino,i,j,c);
//     n->right=built(pre,ino,pos+1,j);
//     n->left=built(pre,ino,i,pos-1);
// }
// void inoprint(node * root){
//     if(root==NULL) return;
//     inoprint(root->left);
//     cout<<root->data<<" ";
//     inoprint(root->right);
// }
// int main(){
//     int pos[]={4,2,5,3,1};
//     int ino[]={4,2,1,5,3};
//     node * root=built(pos,ino,0,4);
//     inoprint(root);
//     return 0;
// }


// level oderr traversal

// #include<bits/stdc++.h>
// using namespace std;
// class node{
//     public:
//     int data;
//     node* left;
//     node* right;
//     node(int val){
//         data=val;
//         left=NULL;
//         right=NULL;
//     }
// };
// void level(node * root){
//     queue<node *> q;
//     q.push(root);
//     q.push(NULL);
//     while (!q.empty()){
//         node * n=q.front();
//         q.pop();
//         if(n!=NULL) {
//             cout<<n->data<<" ";
//             if(n->left) q.push(n->left);
//             if(n->right) q.push(n->right);
//         }
//         else if(!q.empty()){
//             q.push(NULL);
//         }
//     }
// }
// int main(){
//     node * root=new node(1);
//     root->left=new node(2);
//     root->right=new node(3);
//     root->left->left=new node(4);
//     root->left->right=new node(5);
//     root->right->left=new node(6);
//     root->right->right=new node(7);
//     level(root); 
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// class node{
//     public:
//     int data;
//     node* left;
//     node* right;
//     node(int val){
//         data=val;
//         left=NULL;
//         right=NULL;
//     }
// };
// void level(node * root){
//     queue<node *> q;
//     q.push(root);
//     while (!q.empty()){
//         node * n=q.front();
//         q.pop();
//         if(q.front()!=NULL){
//             cout<<n->data<<" ";
//             if(n->left!=NULL) q.push(n->left);
//             if(n->right!=NULL) q.push(n->right);
//         }
//         else if(!q.empty()){
//             q.push(NULL);
//         }
//     }
    
// identical binary tree

// bool same(Node * r1,Node * r2){
// 	if(r1==NULL && r2==NULL) return true;
// 	if(r1==NULL || r2==NULL) return false;
// 	if(r1->data!=r2->data) return false;
// 	if(same(r1->left,r2->left)==false || same(r1->right,r2->right)==false) return false;
// 	return true;
// }
// bool areIdenticalTrees(Node* root1, Node* root2) {
// 	return same(root1,root2);
// }

// }
// int main(){
//     node * root=new node(1);
//     root->left=new node(2);
//     root->right=new node(3);
//     root->left->left=new node(4);
//     root->left->right=new node(5);
//     root->right->left=new node(6);
//     root->right->right=new node(7);
//     level(root); 
//     return 0;
// }

// count total number of nodes ans sum of all the nodes
// #include<bits/stdc++.h>
// using namespace std;
// class node{
//     public:
//     int data;
//     node* left;
//     node* right;
//     node(int val){
//         data=val;
//         left=NULL;
//         right=NULL;
//     }
// };
// int count(node * root){
//     if(root==NULL) return 0;
//     return count(root->left) + count(root->right) + root->data;
// }
// int main(){
//     node * root=new node(1);
//     root->left=new node(2);
//     root->right=new node(3);
//     root->left->left=new node(4);
//     root->left->right=new node(5);
//     root->right->left=new node(6);
//     root->right->right=new node(7);
//     cout<<count(root);
//     return 0;
// }


// height of the tree
// #include<bits/stdc++.h>
// using namespace std;
// class node{
//     public:
//     int data;
//     node* left;
//     node* right;
//     node(int val){
//         data=val;
//         left=NULL;
//         right=NULL;
//     }
// };
// int height(node * root){
//     if(root==NULL) return 0;
//     int l=height(root->left);
//     int r=height(root->right);
//     return max(l,r)+1;
// }
// int main(){
//     node * root=new node(1);
//     root->left=new node(2);
//     root->right=new node(3);
//     root->left->left=new node(4);
//     root->left->right=new node(5);
//     root->right->left=new node(6);
//     root->right->right=new node(7);
//     // root->right->right->right=new node(8);
//     cout<<height(root);  
//     return 0;
// }

// diameter of the tree
// #include<bits/stdc++.h>
// using namespace std;
// class node{
//     public:
//     int data;
//     node* left;
//     node* right;
//     node(int val){
//         data=val;
//         left=NULL;
//         right=NULL;
//     }
// };
// int height(node * root){
//     if(root==NULL) return 0;
//     return max(height(root->right),height(root->left))+1;
// }
// int diameter(node * root){
//     if(root==NULL) return 0;
//     int l=diameter(root->left);
//     int r=diameter(root->right);
//     int lr=height(root->right)+height(root->left)+1;
//     return max(lr,max(l,r));
// }
// int main(){
//     node * root=new node(1);
//     root->left=new node(2);
//     root->right=new node(3);
//     root->left->left=new node(4);
//     root->left->right=new node(5);
//     root->right->left=new node(6);
//     root->right->right=new node(7);
//     root->right->right->right=new node(8);
//     // root->right->right->right=new node(8);
//     cout<<diameter(root);  
//     return 0;
// }


// sum replace in binary tree 

// #include<bits/stdc++.h>
// using namespace std;
// class node{
//     public:
//     int data;
//     node* left;
//     node* right;
//     node(int val){
//         data=val;
//         left=NULL;
//         right=NULL;
//     }
// };
// void sumrep(node * root){
//     if(root==NULL) return;
//     sumrep(root->left);
//     sumrep(root->right);
//     if(root->left!=NULL){
//         root->data+=root->left->data;
//     }
//     if(root->right!=NULL){
//         root->data+=root->right->data;
//     }
// }
// void disp(node * root){
//     if(root==NULL){
//         return;
//     }
//     cout<<root->data<<" ";
//     disp(root->left);
//     disp(root->right);
// }
// int main(){
//     node * root=new node(1);
//     root->left=new node(2);
//     root->right=new node(3);
//     root->left->left=new node(4);
//     root->left->right=new node(5);
//     root->right->left=new node(6);
//     root->right->right=new node(7);
//     sumrep(root);
//     disp(root);
//     return 0;
// }


// balanced height for a binary tree

// #include<bits/stdc++.h>
// using namespace std;
// class node{
//     public:
//     int data;
//     node* left;
//     node* right;
//     node(int val){
//         data=val;
//         left=NULL;
//         right=NULL;
//     }
// };
// void disp(node * root){
//     if(root==NULL){
//         return;
//     }
//     cout<<root->data<<" ";
//     disp(root->left);
//     disp(root->right);
// }
// int height(node * root){
//     if(root==NULL) return 0;
//     return max(height(root->left),height(root->right))+1;
// }
// bool isbalanced(node * root){
//     if(root==NULL) return true;
//     if(!isbalanced(root->left)) return false;
//     if(!isbalanced(root->right)) return false;
//     int lh=height(root->left);
//     int rh=height(root->right);
//     if(abs(lh-rh)<=1) return true;
//     else return false;
// }
// int main(){
//     node * root=new node(1);
//     root->left=new node(2);
//     root->right=new node(3);
//     root->left->left=new node(4);
//     root->left->right=new node(5);
//     root->right->left=new node(6);
//     root->right->right=new node(7);
//     root->right->right->right=new node(8);
//     // root->right->right->right->right=new node(8);
//     if(isbalanced(root)) cout<<"YES";
//     else cout<<"NO";
//     return 0;
// }

// right side view of BT

// #include<bits/stdc++.h>
// using namespace std;
// class node{
//     public:
//     int data;
//     node* left;
//     node* right;
//     node(int val){
//         data=val;
//         left=NULL;
//         right=NULL;
//     }
// };
// void disp(node * root){
//     if(root==NULL){
//         return;
//     }
//     cout<<root->data<<" ";
//     disp(root->left);
//     disp(root->right);
// }
// void right(node * root){
//     if(root==NULL){
//         return ;
//     }
//     queue<node * > q;
//     q.push(root);
//     while(!q.empty()){
//         int n=q.size();
//         for(int i=0;i<n;i++){
//             node * c=q.front();
//             q.pop();
//             if(i==n-1) cout<<c->data<<" ";
//             if(c->left!=NULL) q.push(c->left);
//             if(c->right!=NULL) q.push(c->right);
//         }
//     }
// }
// int main(){
//     node * root=new node(1);
//     root->left=new node(2);
//     root->right=new node(3);
//     root->left->left=new node(4);
//     root->left->right=new node(5);
//     root->right->left=new node(6);
//     root->right->left->right=new node(6);
//     root->right->right=new node(7);
//     right(root);
//     return 0;
// }

// right side view;

// #include<bits/stdc++.h>
// using namespace std;
// class node{
//     public:
//     int data;
//     node* left;
//     node* right;
//     node(int val){
//         data=val;
//         left=NULL;
//         right=NULL;
//     }
// };
// void disp(node * root){
//     if(root==NULL){
//         return;
//     }
//     cout<<root->data<<" ";
//     disp(root->left);
//     disp(root->right);
// }
// void right(node * root){
//     if(root==NULL){
//         return;
//     }
//     queue<node *> q;
//     q.push(root);
//     while(!q.empty()){
//         int n=q.size();
//         for(int i=0;i<n;i++){
//             node * c=q.front();
//             q.pop();
//             if(i==n-1) cout<<c->data<<" ";
//             if(c->left!=NULL) q.push(c->left);
//             if(c->right!=NULL) q.push(c->right);
//         }
//     }
// }
// int main(){
//     node * root=new node(1);
//     root->left=new node(2);
//     root->right=new node(3);
//     root->left->left=new node(4);
//     root->left->right=new node(5);
//     root->right->left=new node(6);
//     root->right->left->right=new node(6);
//     root->right->right=new node(7);
//     right(root);
//     return 0;
// }

// left side view

// #include<bits/stdc++.h>
// using namespace std;
// class node{
//     public:
//     int data;
//     node* left;
//     node* right;
//     node(int val){
//         data=val;
//         left=NULL;
//         right=NULL;
//     }
// };
// void disp(node * root){
//     if(root==NULL){
//         return;
//     }
//     cout<<root->data<<" ";
//     disp(root->left);
//     disp(root->right);
// }
// void right(node * root){
//     if(root==NULL){
//         return;
//     }
//     queue<node *> q;
//     q.push(root);
//     while(!q.empty()){
//         int n=q.size();
//         for(int i=0;i<n;i++){
//             node * c=q.front();
//             q.pop();
//             if(i==0) cout<<c->data<<" ";
//             if(c->left!=NULL) q.push(c->left);
//             if(c->right!=NULL) q.push(c->right);
//         }
//     }
// }
// int main(){
//     node * root=new node(1);
//     root->left=new node(2);
//     root->right=new node(3);
//     root->left->left=new node(4);
//     root->left->right=new node(5);
//     root->right->left=new node(6);
//     root->right->left->right=new node(6);
//     root->right->right=new node(7);
//     right(root);
//     return 0;
// }

// distance between two given nodes 

// #include<bits/stdc++.h>
// using namespace std;
// class node{
//     public:
//     int data;
//     node* left;
//     node* right;
//     node(int val){
//         data=val;
//         left=NULL;
//         right=NULL;
//     }
// };
// void disp(node * root){
//     if(root==NULL){
//         return;
//     }
//     cout<<root->data<<" ";
//     disp(root->left);
//     disp(root->right);
// }
// node * LCA(node * root,int n1,int n2){
//     if(root==NULL) return NULL;
//     if(root->data==n1 || root->data==n2){
//         return root;
//     }
//     node * left=LCA(root->left,n1,n2);
//     node * right=LCA(root->right,n1,n2);
//     if(left!=NULL && right!=NULL){
//         return root;
//     }
//     if(left == NULL && right == NULL){
//         return NULL;
//     }
//     if(left!=NULL){
//         return LCA(root->left,n1,n2);
//     }
//     return LCA(root->right,n1,n2);
// }
// int main(){
//     node * root=new node(1);
//     root->left=new node(2);
//     root->right=new node(3);
//     root->left->left=new node(4);
//     root->left->right=new node(5);
//     root->right->left=new node(6);
//     root->right->right=new node(7);

//     return 0;
// }


// flatern a BT in a linked List

// #include<bits/stdc++.h>
// using namespace std;
// class node{
//     public:
//     int data;
//     node* left;
//     node* right;
//     node(int val){
//         data=val;
//         left=NULL;
//         right=NULL;
//     }
// };
// void disp(node * root){
//     if(root==NULL){
//         return;
//     }
//     disp(root->left);
//     cout<<root->data<<" ";
//     disp(root->right);
// }
// void flat(node * root){
//     if(root==NULL || (root->left==NULL && root->right==NULL)) return;
//     if(root->left!=NULL){
//         flat(root->left);
//         node * temp=root->right;
//         root->right=root->left;
//         root->left=NULL;
//         node * t=root->right;
//         while(t->right!=NULL){
//             t=t->right;
//         }
//         t->right=temp;
//     }
//     flat(root->right);
// }
// int main(){
//     node * root=new node(4);
//     root->left=new node(9);
//     root->right=new node(5);
//     root->left->left=new node(1);
//     root->left->right=new node(3);
//     root->right->right=new node(6);
//     flat(root);
//     disp(root);
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// class node{
//     public:
//     int data;
//     node* left;
//     node* right;
//     node(int val){
//         data=val;
//         left=NULL;
//         right=NULL;
//     }
// };
// void disp(node * root){
//     if(root==NULL){
//         return;
//     }
//     disp(root->left);
//     cout<<root->data<<" ";
//     disp(root->right);
// }
// void flat(node * root){
//     if(root==NULL || (root->left==NULL && root->right==NULL)) return;
//     if(root->left!=NULL){
//         flat(root->left);
//         node * temp=root->right;
//         root->right=root->left;
//         root->left=NULL;
//         node * t=root->right;
//         while(t->right!=NULL){
//             t=t->right;
//         }
//         t->right=temp;
//     }
//     flat(root->right);
// }
// int main(){
//     node * root=new node(4);
//     root->left=new node(9);
//     root->right=new node(5);
//     root->left->left=new node(1);
//     root->left->right=new node(3);
//     root->right->right=new node(6);
//     flat(root);
//     disp(root);
//     return 0;
// }


// Lowest common ansistor

// #include<bits/stdc++.h>
// using namespace std;
// class node{
//     public:
//     int data;
//     node* left;
//     node* right;
//     node(int val){
//         data=val;
//         left=NULL;
//         right=NULL;
//     }
// };
// bool getpath(node *root, int n, vector<int> &path){
//     if(root==NULL) return false;
//     path.push_back(root->data);
//     if(root->data==n){
//         return true;
//     }
//     if(getpath(root->left,n,path) || getpath(root->right,n,path)){
//         return true;
//     }
//     path.pop_back();
//     return false;
// }
// int LCA(node *root,int n1,int n2){
//     vector<int> path1,path2;
//     if(!getpath(root,n1,path1) || !getpath(root,n2,path2)){
//         return -1;
//     }
//     for(int i=0;i<max(path1.size(),path2.size());i++){
//         if(path1[i]!=path2[i]){
//             return path1[i-1];
//         }
//     }
// }
// int main(){
//     node * root=new node(4);
//     root->left=new node(9);
//     root->right=new node(5);
//     root->left->left=new node(1);
//     root->left->right=new node(3);
//     root->right->right=new node(6);
//     cout<<LCA(root,9,5);
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// class node{
//     public:
//     int data;
//     node* left;
//     node* right;
//     node(int val){
//         data=val;
//         left=NULL;
//         right=NULL;
//     }
// };
// bool getpath(node *root,int n,vector<int> &p){
//     if(root==NULL) return false;
//     p.push_back(root->data);
//     if(root->data==n) return true;
//     if(getpath(root->left,n,p) || getpath(root->right,n,p)) return true;
//     p.pop_back();
//     return false;
// }
// int LCA(node *root,int n1,int n2){
//     vector<int> p1,p2;
//     if(!getpath(root,n1,p1) || !getpath(root,n2,p2)) return -1;
//     for(int i=0;i<max(p1.size(),p2.size());i++){
//         if(p1[i]!=p2[i]) return p1[i-1];
//     }
// }

// int main(){
//     node * root=new node(4);
//     root->left=new node(9);
//     root->right=new node(5);
//     root->left->left=new node(1);
//     root->left->right=new node(3);
//     root->right->right=new node(6);
//     cout<<LCA(root,1,3);
//     return 0;
// }


// inorder and preorder to build a b-tree

// #include<bits/stdc++.h>
// using namespace std;
// class node{
//     public:
//     int data;
//     node* left;
//     node* right;
//     node(int n){
//         data=n;
//         left=NULL;
//         right=NULL;
//     }
// };
// int find(int n,int i,int j,int ino[]){
//     for(int k=i;k<=j;k++){
//         if(ino[k]==n) return k;
//     }
// }
// node* built(int pre[],int ino[],int i,int j){
//     static int ind=0;
//     if(i>j) return NULL;
//     int cur=pre[ind];
//     ind++;
//     node* n=new node(cur);
//     if(i==j) return n;
//     int pos=find(cur,i,j,ino);
//     n->left=built(pre,ino,i,pos-1);
//     n->right=built(pre,ino,pos+1,j);
//     return n;
// }
// void display(node * head){
//     if(head==NULL) return;
//     display(head->left);
//     cout<<head->data<<" ";
//     display(head->right);
// }
// int main(){
//     int pre[]={1,2,4,3,5};
//     int ino[]={4,2,1,5,3};
//     node* head=built(pre,ino,0,4);
//     display(head);
//     return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;
// class node{
//     public:
//     int data;
//     node* left;
//     node* right;
//     node(int n){
//         data=n; left=NULL; right=NULL; 
//     }
// };
// int search(int ino[],int i,int j,int n){
//     for(int k=i;k<=j;k++){
//         if(ino[k]==n) return k;
//     }
// }
// node * built(int ino[],int pre[],int i,int j){
//     if(i>j) return NULL;
//     static int ind=0;
//     int cur=pre[ind]; ind++;
//     node * n=new node(cur);
//     if(i==j) return n;
//     int pos=search(ino,i,j,cur);
//     n->left=built(ino,pre,i,pos-1);
//     n->right=built(ino,pre,pos+1,j);
//     return n;
// }
// void display(node* head){
//     if(head==NULL) return;
//     cout<<head->data<<" ";
//     display(head->left);
//     display(head->right);
// }
// int main(){
//     int pre[]={1,2,4,3,5};
//     int ino[]={4,2,1,5,3};
//     node* head=built(pre,ino,0,4);
//     display(head);
//     return 0;
// }



// building tree from postorder and inorder

// #include<bits/stdc++.h>
// using namespace std;
// class node{
//     public:
//     int data;
//     node* right;
//     node* left;
//     node(int n){
//         data=n; left=NULL; right=NULL;
//     }
// };
// int find(vector<int> ino,int i,int j,int n){
//     for(int k=i;k<=j;k++) if(ino[k]==n) return k;
// }
// node* built(vector<int> ino,vector<int> pos,int i,int j){
//     if(i>j) return NULL;
//     static int ind=4;
//     int cur=pos[ind];
//     ind--;
//     node* n=new node(cur);
//     if(i==j) return n;
//     int posi=find(ino,i,j,cur);
//     n->right=built(ino,pos,posi+1,j);
//     n->left=built(ino,pos,i,posi-1);
//     return n; 
// }
// void display(node* head){
//     if(head==NULL) return;
//     display(head->left);
//     cout<<head->data<<" ";
//     display(head->right);
// }
// int main(){
//     vector<int> pos={4,2,5,3,1};
//     vector<int> ino={4,2,1,5,3};
//     node * head=built(ino,pos,0,4);
//     display(head);   
//     return 0;
// }


// level order traversal


// #include<bits/stdc++.h>
// using namespace std;
// class node{
//     public:
//     int data;
//     node* right;
//     node* left;
//     node(int n){
//         data=n; left=NULL; right=NULL;
//     }
// };
// void level(node* head){
//     queue<node*> q;
//     q.push(head);
//     q.push(NULL);
//     while(!q.empty()){
//         node* n=q.front();
//         q.pop();
//         if(n!=NULL){
//             cout<<n->data<<" ";
//             if(n->left!=NULL) q.push(n->left);
//             if(n->right!=NULL) q.push(n->right);
//         }   
//         else if(!q.empty()){
//             q.push(NULL);
//         }
//     }
// }
// void display(node* head){
//     if(head==NULL) return;
//     display(head->left);
//     cout<<head->data<<" ";
//     display(head->right);
// }
// int main(){
//     node* head=new node(1);
//     head->left=new node(2);
//     head->right=new node(3);
//     head->left->left=new node(4);
//     head->left->right=new node(5);
//     level(head);
//     return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;
// class node{
//     public:
//     int data;
//     node* right;
//     node* left;
//     node(int n){
//         data=n; left=NULL; right=NULL;
//     }
// };
// void level(node* head){
//     vector<vector<int>> ans;
//     queue<node*> q;
//     q.push(head);
//     q.push(NULL);
//     vector<int> lev;
//     while(!q.empty()){
//         node* n=q.front();
//         q.pop();
//         if(n!=NULL){
//             lev.push_back(n->data);
//             // cout<<n->data<<" ";
//             if(n->left!=NULL) q.push(n->left);
//             if(n->right!=NULL) q.push(n->right);
//         }
//         else if(!q.empty()) {q.push(NULL); ans.push_back(lev); lev={};}
//         else {ans.push_back(lev);}
            
//     } 
//         for(int i=0;i<ans.size();i++){
//             for(int j=0;j<ans[i].size();j++){
//                 cout<<ans[i][j]<<" ";
//             }
//             cout<<endl;
//         }
// }
// void display(node* head){
//     if(head==NULL) return;
//     display(head->left);
//     cout<<head->data<<" ";
//     display(head->right);
// }
// int main(){
//     node* head=new node(1);
//     head->left=new node(2);
//     head->right=new node(3);
//     head->right->left=new node(6);
//     head->right->left->right=new node(10);
//     head->left->left=new node(4);
//     head->left->right=new node(5);
//     level(head);
//     return 0;
// }

// height of a binary tree

// #include<bits/stdc++.h>
// using namespace std;
// class node{
//     public:
//     int data;
//     node* right;
//     node* left;
//     node(int n){
//         data=n; left=NULL; right=NULL;
//     }
// };
// int height(node* head){
//     if(head==NULL) return 0;
//     return max(height(head->left),height(head->right))+1;
// }
// void display(node* head){
//     if(head==NULL) return;
//     display(head->left);
//     cout<<head->data<<" ";
//     display(head->right);
// }
// int main(){
//     node* head=new node(1);
//     head->left=new node(2);
//     head->right=new node(3);
//     head->right->left=new node(6);
//     head->left->left=new node(4);
//     head->left->right=new node(5);
//     head->left->right->left=new node(100);
//     cout<<height(head);
//     return 0;
// }

// diametter of a bTTREE (O (n^2))

// #include<bits/stdc++.h>
// using namespace std;
// class node{
//     public:
//     int data;
//     node* right;
//     node* left;
//     node(int n){
//         data=n; left=NULL; right=NULL;
//     }
// };
// int height(node* n){
//     if(n==NULL) return 0;
//     return max(height(n->left),height(n->right))+1; 
// }
// int dia(node* n){
//     if(n==NULL) return 0;
//     int di=height(n->left)+height(n->right)+1;
//     int ld=dia(n->left);
//     int rd=dia(n->right);
//     return max(di,max(ld,rd));
// }
// void display(node* head){
//     if(head==NULL) return;
//     display(head->left);
//     cout<<head->data<<" ";
//     display(head->right);
// }
// int main(){
//     node* head=new node(1);
//     head->left=new node(2);
//     head->right=new node(3);
//     head->right->left=new node(6);
//     head->left->left=new node(4);
//     head->left->right=new node(5);
//     head->left->right->left=new node(100);
//     cout<<dia(head);
//     return 0;
// }

//     1
//   2   3
// 4  5 6  
//  100

// better code for diameter of bTREE (O(n))

// #include<bits/stdc++.h>
// using namespace std;
// class node{
//     public:
//     int data;
//     node* right;
//     node* left;
//     node(int n){
//         data=n; left=NULL; right=NULL;
//     }
// };
// int dia(node* n,int* h){
//     if(n==NULL) return 0;
//     int lh(0),rh(0);
//     int ld=dia(n->left,&lh);
//     int rd=dia(n->right,&rh);
//     int cd=lh+rh+1;
//     *h=max(lh,rh)+1;
//     return max(cd,max(ld,rd));
// }
// void display(node* head){
//     if(head==NULL) return;
//     display(head->left);
//     cout<<head->data<<" ";
//     display(head->right);
// }
// int main(){
//     node* head=new node(1);
//     head->left=new node(2);
//     head->right=new node(3);
//     head->right->left=new node(3);
//     int h=0;
//     cout<<dia(head,&h);
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// class node{
//     public:
//     int data;
//     node* right;
//     node* left;
//     node(int n){
//         data=n; left=NULL; right=NULL;
//     }
// };
// int dia(node* n,int* h){
//     if(n==NULL) return 0;
//     int lh(0),rh(0);
//     int ld=dia(n->left,&lh);
//     int rd=dia(n->right,&rh);
//     int cd=ld+rd+1;
//     return max(cd,max(ld,rd));
// }
// void display(node* head){
//     if(head==NULL) return;
//     display(head->left);
//     cout<<head->data<<" ";
//     display(head->right);
// }
// int main(){
//     node* head=new node(1);
//     int h=0;
//     cout<<dia(head,&h);
//     return 0;
// }