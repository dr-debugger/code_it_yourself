#include <iostream>
#include <string>
#include <vector>
#include<limits.h>
#include<algorithm>
using namespace std;

void getTopo(int node, vector<bool> &vis, vector<int> &topo, vector<pair<int, int>> adj[])
{
  vis[node] = true;

  // we're looping through every edges of a particular node; "x" - representing as a node
  for(auto x : adj[node]){
    if(!vis[x.first])
      getTopo(x.first, vis, topo, adj);
  }

  topo.push_back(node);
}

vector<int> shortestPath(int N, int M, vector<vector<int>> &edges)
{
  vector<pair<int, int>> adj[N];

  // make adjacency list
  for (vector<int> x : edges)
  {
    adj[x[0]].push_back({x[1], x[2]});
  }

  // create topological sort of given graph
  vector<int> topoList;
  vector<bool> vis(N, false);
  for (int i = 0; i < N; i++){
    if(!vis[i]){
      getTopo(i, vis, topoList, adj);
    }
  }
  reverse(topoList.begin(), topoList.end());

  // create the result array
  vector<int> res(N, INT_MAX);
  res[0] = 0;

  for (int i = 0; i < N; i++)
  {
    if(res[topoList[i]] != INT_MAX){
      for(auto x : adj[topoList[i]]){
        if(res[topoList[i]] + x.second < res[x.first]){
          res[x.first] = res[topoList[i]] + x.second;
        }
      }
    }
  }

  for (int i = 0; i < N; i++)
  {
    if(res[i] == INT_MAX){
      res[i] = -1;
    }
  }

  return res;
}

int main()
{

  return 0;
}

/**
 * @brief
 * https://practice.geeksforgeeks.org/problems/shortest-path-in-undirected-graph/1?utm_source=geeksforgeeks&utm_medium=newui_home&utm_campaign=potd
 *
 */