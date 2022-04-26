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

void levelOrderTraversal(Node *root)
{
  queue<Node *> q;
  q.push(root);
  while (!q.empty())
  {
    Node *current = q.front();
    q.pop();
    cout << current->data << " ";
    if (current->left != NULL)
      q.push(current->left);
    if (current->right != NULL)
      q.push(current->right);
  }
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
  levelOrderTraversal(root);
  return 0;
}