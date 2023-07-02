// Check if tree has this sum
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
    void dfsvisit(TreeNode* node,int pathsum,vector<int>& paths){
	if(node->left!=nullptr)
	    dfsvisit(node->left,pathsum+node->left->val,paths);
	if(node->right!=nullptr)
	    dfsvisit(node->right,pathsum+node->right->val,paths);
	if(node->left==nullptr && node->right==nullptr)
	    paths.push_back(pathsum);
	
	

    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        vector<int> pathsum;
	if(root==nullptr)
	    return false;
	dfsvisit(root,root->val,pathsum); 
	for(int i:pathsum){
	    if(i==targetSum)
		return true;
	}
	return false;
    }	    
};
