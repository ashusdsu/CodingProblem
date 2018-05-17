#include <iostream>
#include <vector>
#include <string>
#include <stack>
using namespace std;

struct TreeNode {
  char val;
  TreeNode *left;
  TreeNode *right;
  TreeNode (char x) : val(x), left(NULL), right(NULL)
  { }
};

// void makeTree(string s1)
// {
//   if (s1.empty())
//     return;

//   TreeNode *root = new TreeNode(s1[0]);

//   stack <char> stk;

//   for (int i = 1; i<s1.size()-1; i++)
//   {
//     if (s1[i] == "?" )
//     {
//       stk.push("?");
//       root->left = new TreeNode(s1[i+1]);

//     }
//     else (s1[i] == ":")
//     {
//       if (stk.empty())
//       {
//         cout<<"Error";
//         return;
//       }
//       stk.pop();
//       continue;
//     }
//     TreeNode *temp = new TreeNode()

//   }
// }

TreeNode * makeTreeRecursive(string s1, int i)
{
  TreeNode *root = new TreeNode(s1[i]);
  i++;
  if (s1.size() == i)
  {
    return root;
  }
  if (s1[i] == '?')
  {
    root->left = makeTreeRecursive(s1, i+1);
  }
  else if (s1[i] == ':')
  {
    root->right = makeTreeRecursive(s1, i+1);
  }

  return root;
}

void preOrderTraversal(TreeNode *root)
{
  if (!root)
    return;

  cout<<root->val;
  preOrderTraversal(root->left);
  preOrderTraversal(root->right);
}

int main()
{
  string s1 = "a?b?c:d:e";
  TreeNode *root = makeTreeRecursive(s1, 0);
  TreeNode *exe = new TreeNode('c');
  exe->right = new TreeNode('v');
  exe->left = new TreeNode('z');
  preOrderTraversal(exe);
  cout<<endl;
  preOrderTraversal(root);

  return 0;
}
