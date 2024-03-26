/*
 * @lc app=leetcode id=987 lang=cpp
 *
 * [987] Vertical Order Traversal of a Binary Tree
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,map<int,multiset<int>>> mp;
        vector<vector<int>> ans;
        queue<pair<TreeNode *,pair<int,int>>> q;
        q.push({root,{0,0}});
        while(!q.empty()){
            auto i = q.front();
            q.pop();
            TreeNode * n=i.first;
            int x=i.second.first; int y=i.second.second;
            mp[x][y].insert(n->val);
            if(n->left){
                q.push({n->left,{x-1,y+1}});
            }
            if(n->right){
                q.push({n->right,{x+1,y+1}});
            }
        }
        for(auto i:mp){
            vector<int> col;
            for(auto j:i.second){
                col.insert(col.end(),j.second.begin(),j.second.end());
            }
            ans.push_back(col);
        }
        return ans;
    }
};
// @lc code=end

