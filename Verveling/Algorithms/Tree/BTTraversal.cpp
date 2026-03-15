#include "TreeNode.hpp"
#include <iostream>
#include <vector>


std::vector<int> nums;

void inorder(TreeNode* root){
    if(root == nullptr)
        return;
    inorder(root->left);
    nums.push_back(root->val);
    inorder(root->right);

        
}

void preorder(TreeNode* root){
    if(root == nullptr)
        return;
    nums.push_back(root->val);
    preorder(root->left);
    preorder(root->right);

        
}

void postorder(TreeNode* root){
    if(root == nullptr)
        return;

    postorder(root->left);
    postorder(root->right);
    nums.push_back(root->val);
        
}


int main(){

    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->right = new TreeNode(6);

    //inorder(root);
    //preorder(root);
    postorder(root);
    for(int x : nums)
        std::cout << x << " "; 
    std::cout << "\n";
    return 0;
}