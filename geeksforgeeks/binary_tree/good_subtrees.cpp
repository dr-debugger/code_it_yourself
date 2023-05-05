#include <iostream>
#include <string>
#include<set>
using namespace std;

class Node
{
public:
  int data;
  Node *left;
  Node *right;
};

set<int> dfs(Node *node, int &count, int k)
{
  if (node == nullptr) {
    set<int> temp;
    return temp;
  };

  // we need to store distinct values for every sub tree, thats why we need to store every value of the subtree in a set here;

  set<int> left = dfs(node->left, count, k);
  set<int> right = dfs(node->right, count, k);

  set<int> finalSet; // finalset will be [ left_set U right_set U current_node_value ]
  finalSet.insert(node->data);
  finalSet.insert(left.begin(), left.end());
  finalSet.insert(right.begin(), right.end());

if(finalSet.size() <= k){
  count++;
}

return finalSet;
}

int goodSubtrees(Node *root, int k)
{
  int count = 0;
  dfs(root, count, k);
  return count;
}

int main()
{

  return 0;
}

/**
 * @brief
 * https://practice.geeksforgeeks.org/problems/df12afc57250e7f6fc101aa9c272343184fe9859/1?utm_source=geeksforgeeks&utm_medium=newui_home&utm_campaign=potd
 *
 * 
 * We need to use set here cause we only concern about distinct value(s)
 */