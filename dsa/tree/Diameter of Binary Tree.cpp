#include <bits/stdc++.h>
using namespace std ; 

struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    int diametre = 0 ; 

    int solve(TreeNode* root) {
        if(root == NULL) return 0 ; 
        int left = 0 ;
        int right = 0 ; 

        if(root->left) {
             left = solve(root->left) ;
        }
        if(root->right) {
             right = solve(root->right) ;
        }

        diametre = max(diametre, left + right) ; 

        return 1+ max(left,right) ; 

    }

    int diameterOfBinaryTree(TreeNode* root) {
         solve(root) ; 
         return diametre ;
    }
};

int main(){

return 0 ; 
}