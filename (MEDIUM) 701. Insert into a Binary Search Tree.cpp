/*
(MEDIUM) 701. Insert into a Binary Search Tree
Runtime: 116 ms, faster than 74.15% of C++ online submissions for Insert into a Binary Search Tree.
Memory Usage: 60.3 MB, less than 5.18% of C++ online submissions for Insert into a Binary Search Tree.]
*/


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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root == nullptr){
            root = new TreeNode(val);
        }else{ // root != nullptr
            TreeNode* currentPtr = root;
            TreeNode* newNodePtr = new TreeNode(val);
            while(currentPtr != nullptr){
                if(val < currentPtr->val){
                    if(currentPtr->left == nullptr){
                        currentPtr->left = newNodePtr;
                        currentPtr = nullptr;
                    }else
                        currentPtr = currentPtr->left;
                }else{
                    if(currentPtr->right == nullptr){
                        currentPtr->right = newNodePtr;
                        currentPtr = nullptr;
                    }else
                        currentPtr = currentPtr->right;
                }
            }
        }
        return root;
    }
};
