/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

int lowestCommonAncestor(TreeNode<int> *root, int x, int y)
{
    if(root==NULL){
        return -1;
    }
    if(root->data==x || root->data==y)return root->data;
    int a=lowestCommonAncestor(root->left,x,y);
    int b=lowestCommonAncestor(root->right,x,y);
    if(a==x && b==y || b==x && a==y){
        return root->data;
    }
    else if(a==-1 && b==-1){
        return -1;
    }
    else if(a==-1 && b!=-1){
        return b;
    }
    else if(a!=-1 && b==-1){
        return a;
    }
}