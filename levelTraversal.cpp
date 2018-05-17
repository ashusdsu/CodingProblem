#include <iostream>
#include <vector>
using namespace std;

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode (int x) : val(x), left(NULL), right(NULL)
  { }
};

int maxDepth(TreeNode *root)
{
  if (!root)
  {
  }
  return 0;

  int Height_left = maxDepth(root->left);
  int Height_right = maxDepth(root->right);

  return Height_left>Height_right?Height_left+1:Height_right+1;
}

int main()
{
  TreeNode *root = TreeNode(26);
  root->left = TreeNode(10);
  root->right = TreeNode(3);
  root->left->left = TreeNode(4);
  root->left->right = TreeNode(6);
  root->left->left->left =TreeNode(30);

  int height = maxDepth(root);
  cout<<"Height of the Tree Is"<<height<<endl;

  return 0;
}
