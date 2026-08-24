class Solution {
private:
    unordered_map<int, int> inorderMap;
    int postIdx;

    TreeNode* build(const vector<int>& postorder, int left, int right) {
        if (left > right) return nullptr;

        // Root value is at the current postIdx
        int rootVal = postorder[postIdx--];
        TreeNode* root = new TreeNode(rootVal);

        // Find index of root in inorder array in O(1) time
        int mid = inorderMap[rootVal];

        // Build right subtree first because we are iterating postorder backwards
        root->right = build(postorder, mid + 1, right);
        root->left = build(postorder, left, mid - 1);

        return root;
    }

public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        for (int i = 0; i < inorder.size(); ++i) {
            inorderMap[inorder[i]] = i;
        }
        postIdx = postorder.size() - 1;
        return build(postorder, 0, inorder.size() - 1);
    }
};