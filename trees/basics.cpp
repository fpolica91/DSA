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
  cout << root->data << "";
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

int height(TreeNode *root)
{
  if (root == NULL)
    return 0;
  int lh = height(root->left);
  int rh = height(root->right);
  return max(lh, rh) + 1;
}

void printNodesAtKthLevel(TreeNode *root, int curr, int k)
{

  if (root == NULL)
    return;

  if (k == curr)
  {

    cout << root->data << endl;
  }

  printNodesAtKthLevel(root->left, curr + 1, k);
  printNodesAtKthLevel(root->right, curr + 1, k);
}

int main()
{

  TreeNode root = createTree({1, 2, 3, 4, 5, 6, 7});

  cout << "Inorder traversal of the given tree is \n";
  inOrder(&root);
  cout << endl;
  cout << "Preorder traversal of the given tree is \n";
  preOrder(&root);
  cout << endl;
  cout << "Postorder traversal of the given tree is \n";
  postOrder(&root);
  cout << endl;
  cout << "Height of the tree is " << height(&root);
  cout << endl;
  cout << "the nodes at kth level are \n";

  TreeNode *root1 = new TreeNode(10);
  root1->left = new TreeNode(20);
  root1->right = new TreeNode(30);
  root1->left->left = new TreeNode(40);
  root1->left->right = new TreeNode(50);
  root1->right->right = new TreeNode(70);

  printNodesAtKthLevel(root1, 0, 2);
  cout << endl;

  return 0;
}
