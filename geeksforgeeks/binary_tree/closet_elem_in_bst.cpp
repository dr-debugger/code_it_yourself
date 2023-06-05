#include<iostream>
#include<string>
#include<cmath>
#include<limits.h>
using namespace std;

struct Node
{
  int data;
  Node *left;
  Node *right;

  Node(int val)
  {
    data = val;
    left = right = NULL;
  }
};


void dfs(Node *node, int &res, int k){
  if(node == NULL)
    return;

  int val = abs(k - node->data);

  res = min(res, val);

  dfs(node->left, res, k);
  dfs(node->right, res, k);
}

int minDiff(Node *root, int K)
{
  int res = INT_MAX;

  dfs(root, res, K);

  return res;
}

int main(){
  cout << abs(9 - 9);
  return 0;
}

/**
 * @brief
 * https://practice.geeksforgeeks.org/problems/find-the-closest-element-in-bst/1?utm_source=geeksforgeeks&utm_medium=newui_home&utm_campaign=potd
 *
 * 
 * TC: O(n)
 * SC: O(n) // cause we are using recurtion to traverse the tree, you can use normal while loop to get constant space complexity
 */
