#include <bits/stdc++.h>
using namespace std;

void dfs(int node, vector<vector<int> > adj, vector<int> &visited, vector<int> &ans)
{
  if (visited[node])
    return;
  visited[node] = true;
  ans.push_back(node);
  for (auto i : adj[node])
  {
    dfs(i, adj, visited, ans);
  }
}

vector<int> dfsOfGraph(int v, vector<vector<int> > adj)
{
  vector<int> visited(v, 0);
  vector<int> ans;
  dfs(0, adj, visited, ans);
  return ans;
}

void add_edge_directed(vector<vector<int> > &adj, int u, int v)
{
  adj[u].push_back(v);
}

int main()
{
  int v = 4;
  vector<vector<int> > adj(v);
  add_edge_directed(adj, 0, 2);
  add_edge_directed(adj, 0, 3);
  add_edge_directed(adj, 1, 2);
  add_edge_directed(adj, 1, 3);
  add_edge_directed(adj, 2, 0);
  add_edge_directed(adj, 2, 1);
  add_edge_directed(adj, 2, 3);
  add_edge_directed(adj, 3, 0);
  add_edge_directed(adj, 3, 1);
  add_edge_directed(adj, 3, 2);
  vector<int> ans = dfsOfGraph(v, adj);
  for (int i : ans)
  {
    cout << i << " ";
  }
}
