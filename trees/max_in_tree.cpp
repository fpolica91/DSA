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

int maxInTree(Node *root)
{
  if (root == NULL)
    return INT_MIN;
  int l = maxInTree(root->left);
  int r = maxInTree(root->right);
  return max(max(l, r), root->data);
}
int main()
{
  Node *root = new Node(1);
  root->left = new Node(2);
  root->right = new Node(3);
  root->left->left = new Node(4);
  root->left->right = new Node(5);
  root->right->left = new Node(6);
  root->right->right = new Node(7);
  root->left->left->left = new Node(8);
  root->left->left->right = new Node(9);

  cout << maxInTree(root) << endl;
  return 0;
}