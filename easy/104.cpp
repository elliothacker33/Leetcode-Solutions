//Find max depth in a tree
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
    void visit(TreeNode* node,int sum, int& maxSum){
	if(node->left!=nullptr){
	    visit(node->left,sum+1,maxSum);
	}
	if(node->right!=nullptr){
	    visit(node->right,sum+1,maxSum);
	}
	if(node->left==nullptr && node->right==nullptr){
	    if(sum>maxSum)
		maxSum=sum;
	}
}
    int maxDepth(TreeNode* root) {
	int sum=1;
	int maxSum=1;
	if(root==nullptr)
	    return 0;
	visit(root,sum,maxSum);
	return maxSum;
    }	
};
