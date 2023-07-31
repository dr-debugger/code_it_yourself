#include<iostream>
#include<string>
#include<vector>
#include<queue>
using namespace std;

vector<int> bfsOfGraph(int V, vector<int> adj[])
{
  vector<int> res;
  vector<bool> vis(V, false);
  queue<int> q;

  q.push(0);
  vis[0] = true;

  while (!q.empty())
  {
    int top = q.front();
    q.pop();

    res.push_back(top);

    for (auto node: adj[top])
    {
      if(!vis[node]){
        vis[node] = true;
        q.push(node);
      }
    }
  }

  return res;
}

int main(){
  
  return 0;
}

/**
 * @brief
 * https://practice.geeksforgeeks.org/problems/bfs-traversal-of-graph/1?utm_source=geeksforgeeks&utm_medium=newui_home&utm_campaign=potd
 *
 *
 */