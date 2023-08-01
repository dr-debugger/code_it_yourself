#include <iostream>
#include <string>
#include <vector>
using namespace std;

void dfs(vector<bool> &vis, vector<int> &res, vector<int> a, vector<int> adj[])
{
  for (auto node : a)
  {
    if (!vis[node])
    {
      vis[node] = true;
      res.push_back(node);
      dfs(vis, res, adj[node], adj);
    }
  }
}

vector<int> dfsOfGraph(int V, vector<int> adj[])
{
  vector<int> res;
  vector<bool> vis(V, false);

  vis[0] = true;
  res.push_back(0);

  dfs(vis, res, adj[0], adj);

  return res;
}

int main()
{

  return 0;
}

/**
 * @brief
 * https://practice.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1?utm_source=geeksforgeeks&utm_medium=newui_home&utm_campaign=potd
 *
 */