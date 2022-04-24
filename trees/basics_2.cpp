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
// this block is for level order traversal naive approach
int findHeightHelper(TreeNode *root)
{
  if (root == NULL)
    return 0;
  return 1 + max(findHeightHelper(root->left), findHeightHelper(root->right));
}

void printAtLevel(TreeNode *root, int level, int curr)
{
  if (root == NULL)
    return;
  if (level == curr)
  {
    cout << root->data << " ";
    return;
  }

  printAtLevel(root->left, level, curr + 1);
  printAtLevel(root->right, level, curr + 1);
}

void levelOrderTraversal(TreeNode *root)
{
  int heightOfTree = findHeightHelper(root);
  int n = 1;
  while (heightOfTree >= n)
  {
    cout << n << ": ";
    printAtLevel(root, n, 1);
    cout << endl;
    n++;
  }
}
// this block is for level order traversal using queue

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
  // printNodesAtKthLevel(root1, 2, 0);
  cout << endl;
  cout << "level order traversal naive method " << endl;
  levelOrderTraversal(root1);
  cout << endl;

  return 0;
}