/************************************************************

    Following is the Binary Tree node structure:

    class BinaryTreeNode
    {
    public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };


************************************************************/
void inOrder( BinaryTreeNode<int> *root, vector<int> &in){
    if(root == NULL)
        return;
    inOrder(root->left,in);
    in.push_back(root->data);
        inOrder(root->right,in);   
}
void preOrder( BinaryTreeNode<int> *root, vector<int> &pre){
    if(root == NULL)
        return;
    pre.push_back(root->data);
    preOrder(root->left,pre);
    preOrder(root->right,pre);   
}
void postOrder( BinaryTreeNode<int> *root, vector<int> &post){
    if(root == NULL)
        return;
    postOrder(root->left,post);
    postOrder(root->right,post);   
     post.push_back(root->data);
}
vector<vector<int>> getTreeTraversal(BinaryTreeNode<int> *root){
    vector<vector<int>> ans;
    
    vector<int>pre;
    vector<int>in;
    vector<int>post;
    
    inOrder(root,in);
    preOrder(root,pre);
    postOrder(root,post);
    
    ans.push_back(in);
    ans.push_back(pre);
    ans.push_back(post);
    return ans;
}