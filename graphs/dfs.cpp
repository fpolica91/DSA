#include <bits/stdc++.h>
using namespace std;

void add_edge_directed(vector<vector<int> > &adj, int u, int v)
{
  adj[u].push_back(v);
}

void dfs(vector<vector<int> > &adj, vector<bool> &visited, int node)
{
  if (visited[node])
    return;
  cout << node << " ";
  visited[node] = true;
  for (auto next : adj[node])
  {
    dfs(adj, visited, next);
  }
}

int main()
{
  int V = 4;
  vector<vector<int> > adj(V);
  add_edge_directed(adj, 0, 2);
  add_edge_directed(adj, 0, 3);
  add_edge_directed(adj, 1, 2);
  add_edge_directed(adj, 1, 3);
  add_edge_directed(adj, 2, 0);
  add_edge_directed(adj, 2, 1);
  add_edge_directed(adj, 2, 3);
  add_edge_directed(adj, 3, 0);
  add_edge_directed(adj, 3, 1);
  add_edge_directed(adj, 3, 4);
  vector<bool> visited(4, false);

  dfs(adj, visited, 0);
  return 0;
}