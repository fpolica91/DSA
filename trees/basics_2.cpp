#include <bits/stdc++.h>
using namespace std;

class TreeNode
{
public:
  int data;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int data)
  {
    this->data = data;
    this->left = NULL;
    this->right = NULL;
  }
};

void printNodesAtKthLevel(TreeNode *root, int k, int curr)
{
  if (root == NULL)
    return;
  if (curr == k)
  {
    cout << root->data << " ";
  }
  printNodesAtKthLevel(root->left, k, curr + 1);
  printNodesAtKthLevel(root->right, k, curr + 1);
}

int main()
{
  TreeNode *root1 = new TreeNode(10);
  root1->left = new TreeNode(20);
  root1->right = new TreeNode(30);
  root1->left->left = new TreeNode(40);
  root1->left->right = new TreeNode(50);
  root1->right->right = new TreeNode(70);
  printNodesAtKthLevel(root1, 2, 0);
  cout << endl;

  return 0;
}