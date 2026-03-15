#include "TreeNode.hpp"
#include <iostream>
#include <vector>

int levels = 10;
std::vector<std::vector<int>> Tree;

int ans = 0;



void height(TreeNode* root, int level){
    if(root == nullptr)
        return;
    
    if(level > ans)
        ans = level;
    height(root->left, level + 1);
    height(root->right, level + 1);

}



void levelCalc(TreeNode* root, int level){
    if(root == nullptr)
        return;
    
    Tree[level].push_back(root->val);
    levelCalc(root->left, level + 1);
    levelCalc(root->right, level + 1);

}
void printTree(TreeNode* root){
    height(root, 1);

    for(int i = 0; i < ans; i++){
        Tree.push_back({});
    }
    levelCalc(root, 0);
    
    for(int i = 0; i < ans; i++){
        for(int j = 0; j < Tree[i].size(); j++){
            std::cout << Tree[i][j] << " ";
        }
        std::cout << "\n";
    }
}

void insert(TreeNode* root, int val){

    if(root->left == nullptr && root->right == nullptr){
        if(val > root->val){
            root->right = new TreeNode(val);
        }else{
            root->left = new TreeNode(val);
        }
        return;
    }
    if(val > root->val){
        insert(root->right, val);
    }

    if(val < root->val){
        insert(root->left, val);
    }

    
}

int main(){

    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->right = new TreeNode(6);
    
    insert(root, 10);
    insert(root, 7);
    printTree(root);
    return 0;
}