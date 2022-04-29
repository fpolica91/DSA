#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
  int data;
  Node *left;
  Node *right;
  Node(int data)
  {
    this->data = data;
    this->left = NULL;
    this->right = NULL;
  }
};

int childrenSum(Node *root)
{
  int left_data = 0;
  int right_data = 0;
  if (root == NULL or (root->left == NULL and root->right == NULL))
  {
    return 1;
  }
  if (root->left != NULL)
  {
    left_data = root->left->data;
  }
  if (root->right != NULL)
  {
    right_data = root->right->data;
  }
  if (left_data + right_data == root->data and childrenSum(root->left) and childrenSum(root->right))
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

int main()
{
  Node *root = new Node(2);
  root->left = new Node(1);
  root->right = new Node(1);
  root->left->left = new Node(1);

  cout << childrenSum(root) << endl;
  return 0;
}