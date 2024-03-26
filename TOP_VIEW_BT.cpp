// struct Node
// {
//     int data;
//     Node* left;
//     Node* right;
// };
class Solution
{
    public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {
        vector<int> ans;
        map<int,map<int,int>> mp;
        queue<pair<Node*,pair<int,int>>> q;
        q.push({root,{0,0}});
        while(!q.empty()){
            auto i=q.front();
            q.pop();
            Node * n=i.first;
            int x = i.second.first; int y=i.second.first;
            if(!mp[x][y]) mp[x][y]=n->data;
            if(n->left){
                q.push({n->left,{x-1,y+1}});
            }
            if(n->right){
                q.push({n->right,{x+1,y+1}});
            }
        }
        for(auto i:mp){
            for(auto j:i.second){
                ans.push_back(j.second);
            }
        }
        return ans;
        }

};