#include <bits/stdc++.h>
using namespace std;

class GraphNode
{
public:
  int data;
  vector<GraphNode *> adj;
  GraphNode(int v)
  {
    data = v;
  }
};

void dfs(GraphNode *node, vector<bool> &visited)
{
  if (visited[node->data])
    return;
  cout << node->data << " ";
  visited[node->data] = true;
  for (auto n : node->adj)
  {
    dfs(n, visited);
  }
}

int main()
{
  GraphNode *edge = new GraphNode(1);
  GraphNode *edge1 = new GraphNode(2);
  GraphNode *edge2 = new GraphNode(3);
  edge->adj.push_back(edge1);
  edge1->adj.push_back(edge);
  edge->adj.push_back(edge2);
  edge2->adj.push_back(edge);
  int V = 3;
  vector<bool> visited(3, false);

  dfs(edge, visited);

  return 0;
}