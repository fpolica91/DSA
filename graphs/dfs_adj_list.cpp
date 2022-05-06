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

void dfs(vector<vector<int> > adj)
{
  int V = adj.size();
  vector<bool> visited(V, false);
  for (int i = 0; i < V; i++)
  {
    dfs_helper(adj, i, visited);
  }
}

int main()
{
  dfs({{1, 4},
       {0, 2, 3},
       {1, 3},
       {1, 2},
       {0}});
  cout << endl;
  dfs({{1, 4},
       {0},
       {3},
       {2},
       {0}});

  return 0;
}