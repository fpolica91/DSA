#include <bits/stdc++.h>
using namespace std;

bool dfs_util(int node, int parent, vector<vector<int> > &adj, vector<int> &visited)
{
  visited[node] = 1;
  for (auto vertex : adj[node])
  {
    if (vertex == parent)
      continue;
    if (visited[vertex] == 1)
      return true;
    if (dfs_util(vertex, node, adj, visited))
      return true;
  }
  return false;
}

bool isCycle(int v, vector<vector<int> > adj)
{
  vector<int> visited(v, 0);
  // handle disconnected graphs
  for (int i = 0; i < v; i++)
  {
    if (visited[i] == 0)
    {
      bool cycleFound = dfs_util(i, -1, adj, visited);
      if (cycleFound)
        return true;
    }
  }
  return false;
}

int main()
{
  vector<vector<int> > adj(4);
  adj[0].push_back(2);
  adj[0].push_back(3);
  adj[1].push_back(2);
  adj[1].push_back(3);
  adj[2].push_back(0);
  adj[2].push_back(1);
  adj[2].push_back(3);

  cout << isCycle(4, adj) << endl;
}