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

void inOrder(TreeNode *root)
{
  if (root == NULL)
  {
    return;
  }
  inOrder(root->left);
  cout << root->data << " ";
  inOrder(root->right);
}

void preOrder(TreeNode *root)
{
  if (root == NULL)
    return;
  cout << root->data << " ";
  preOrder(root->left);
  preOrder(root->right);
}

void postOrder(TreeNode *root)
{
  if (root == NULL)
    return;
  postOrder(root->left);
  postOrder(root->right);
  cout << root->data << " ";
}

TreeNode createTree(vector<int> nums)
{
  TreeNode *root = new TreeNode(nums[0]);
  queue<TreeNode *> q;
  q.push(root);
  int i = 1;
  int n = nums.size();
  while (i < n)
  {
    TreeNode *node = q.front();
    q.pop();
    if (i < n)
    {
      node->left = new TreeNode(nums[i]);
      q.push(node->left);
      i++;
    }
    if (i < n)
    {
      node->right = new TreeNode(nums[i]);
      q.push(node->right);
      i++;
    }
  }
  return *root;
}

int main()
{

  TreeNode root = createTree({1, 2, 3, 4, 5});

  cout << "Inorder traversal of the given tree is \n";
  inOrder(&root);
  cout << endl;
  cout << "Preorder traversal of the given tree is \n";
  preOrder(&root);
  cout << endl;
  cout << "Postorder traversal of the given tree is \n";
  postOrder(&root);
  cout << endl;

  return 0;
}
