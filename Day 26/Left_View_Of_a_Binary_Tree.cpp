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
void leftView(TreeNode<int> *root, int level, vector<int>&res){
    if(root == NULL)
            return;
    if(res.size() == level) res.push_back(root->data);
    
      leftView(root->left,level+1,res);
    leftView(root->right,level+1,res);
  
}
vector<int> getLeftView(TreeNode<int> *root)
{
    vector<int> res;
    leftView(root,0,res);
    return res;
}