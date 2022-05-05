#include <bits/stdc++.h>
using namespace std;

vector<vector<int> > printGraph(vector<vector<int> > adj)
{
  int v = adj.size();
  vector<vector<int> > graph(v);
  for (int i = 0; i < v; i++)
  {
    graph[i].push_back(i);
    for (auto j : adj[i])
    {
      graph[i].push_back(j);
    }
  }
  return graph;
}

int main()
{
  printGraph({{1, 4},
              {0, 2, 3},
              {1, 3},
              {1, 2},
              {0}});
  return 0;
}