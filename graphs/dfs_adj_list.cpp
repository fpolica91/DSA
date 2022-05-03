#include <bits/stdc++.h>
using namespace std;

void dfs_helper(vector<vector<int> > &adj, int current, vector<bool> &visited)
{
  if (visited[current])
    return;
  cout << current << " ";
  visited[current] = true;
  for (int neighbor : adj[current])
  {
    dfs_helper(adj, neighbor, visited);
  }
}

void dfs(vector<vector<int> > &adj)
{
  int V = adj.size();
  vector<bool> visited(V, false);
  dfs_helper(adj, 0, visited);
}

int main()
{
  return 0;
}