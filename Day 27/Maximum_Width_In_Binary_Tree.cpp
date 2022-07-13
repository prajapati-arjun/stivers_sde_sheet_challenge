/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

#include<bits/stdc++.h>
using namespace std;
int getMaxWidth(TreeNode<int> *root)
{
    int maxcount=1;
    if(root==NULL)return 0;
    queue<TreeNode<int>*> helper;
    helper.push(root);
    while(!helper.empty()){
        int tempcount=0;
        int s=helper.size();
        for(int i=0;i<s;i++){
            if(helper.front()->left!=NULL){
                tempcount++;
                helper.push(helper.front()->left);
            }
            if(helper.front()->right!=NULL){
                tempcount++;
                helper.push(helper.front()->right);
            }
            helper.pop();
        }
        maxcount=max(maxcount,tempcount);
    }
    return maxcount;
}