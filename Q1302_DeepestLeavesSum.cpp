struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
int findMaxDepth(TreeNode* root) {
    if (!root) return 0;
    return max(findMaxDepth(root->left), findMaxDepth(root->right)) + 1;
} 
int maxDepthLeaves(TreeNode* root, int cl, int &md) {
    if(!root) return 0;
    if(cl == md) return root->val;
    return (maxDepthLeaves(root->left, cl+1, md) + maxDepthLeaves(root->right, ++cl, md));
}
int deepestLeavesSum(TreeNode* root) {
    int maxdep = findMaxDepth(root);
    return maxDepthLeaves(root, 1, maxdep);
}
