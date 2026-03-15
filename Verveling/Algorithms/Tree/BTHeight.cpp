#include "TreeNode.hpp"
#include <iostream>
#include <vector>

int ans = 0;



void height(TreeNode* root, int level){
    if(root == nullptr)
        return;
    
    if(level > ans)
        ans = level;
    height(root->left, level + 1);
    height(root->right, level + 1);
    std::cout << ans << "\n";

}
void Depth(TreeNode* root){
    height(root, 1);
    std::cout << "Tree is " << ans << " levels groot\n";
}

int main(){

    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->right = new TreeNode(6);
    Depth(root);

    return 0;
}