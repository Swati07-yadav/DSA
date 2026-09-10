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
    int sumOfNodes(TreeNode* root){
        if(root == NULL) return 0;
        int l = sumOfNodes(root->left);
        int r = sumOfNodes(root->right);
        return root->val + l + r;
    }
    int countOfNodes(TreeNode* root){
        if(root == NULL) return 0;
        int l = countOfNodes(root->left);
        int r = countOfNodes(root->right);
        return 1+l+r;
    }
    int averageOfSubtree(TreeNode* root) {
        if(root == NULL) return 0;
        int ans = 0;
        int sum = sumOfNodes(root);
        int count = countOfNodes(root);
        int avg = sum/count;
        if(avg == root->val) ans++;
        ans += averageOfSubtree(root->left);
        ans += averageOfSubtree(root->right);
        return ans;
    }
};