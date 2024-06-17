#include <iostream>
#include <vector>
using namespace std;

// Definition for a binary tree node
struct TreeNode
{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};

// Recursive helper function for inorder traversal
void inorder(TreeNode* root, vector<int>& ans)
{
    // Base case: If the current node is NULL, return
    if (root == NULL) return;
    // Recursively traverse the left subtree
    inorder(root->left, ans);
    // Push the value of the current node into the result vector
    ans.push_back(root->val);
    // Recursively traverse the right subtree
    inorder(root->right, ans);
}

// Function to perform inorder traversal of a binary tree
vector<int> inorderTraversal(TreeNode* root)
{
    // Create a vector to store the traversal result
    vector<int> ans; 
    // Call the recursive helper function to perform the traversal
    inorder(root, ans);
    // Return the vector containing the traversal result
    return ans;
}

int main()
{
    // Create a sample binary tree
    TreeNode* root = new TreeNode(1);
    root->right = new TreeNode(2);
    root->right->left = new TreeNode(3);
    // Perform inorder traversal
    vector<int> result = inorderTraversal(root);
    // Display the result
    cout << "Inorder Traversal Result: ";
    for (int val : result)
    {
        cout << val << " ";
    }
    cout << endl;
    // Clean up the tree (deallocate memory)
    delete root->right->left;
    delete root->right;
    delete root;
    return 0;
}
