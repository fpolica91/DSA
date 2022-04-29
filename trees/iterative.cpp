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
void in_order_traversal(Node *root)
{
  stack<Node *> s;
  Node *current = root;
  while (current != NULL or s.empty() == false)
  {
    while (current != NULL)
    {
      s.push(current);
      current = current->left;
    }
    current = s.top();
    cout << current->data << " ";
    s.pop();
    current = current->right;
  }
}

void pre_order_iterative(Node *root)
{
  stack<Node *> nodes;
  nodes.push(root);
  while (nodes.empty() == false)
  {
    Node *current = nodes.top();
    cout << current->data << " ";
    nodes.pop();
    if (current->right != NULL)
    {
      nodes.push(current->right);
    }
    if (current->left != NULL)
    {
      nodes.push(current->left);
    }
  }
}

void spacedOptimizedPreOrder(Node *root)
{
  stack<Node *> nodes;
  Node *current = root;
  while (current != NULL or nodes.empty() == false)
  {
    while (current != NULL)
    {
      cout << current->data << " ";
      if (current->right != NULL)
      {
        nodes.push(current->right);
      }
      current = current->left;
    }
    if (nodes.empty() == false)
    {
      current = nodes.top();
      nodes.pop();
    }
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
  in_order_traversal(root);
  cout << endl;
  pre_order_iterative(root);
  cout << endl;
  spacedOptimizedPreOrder(root);
  return 0;
}