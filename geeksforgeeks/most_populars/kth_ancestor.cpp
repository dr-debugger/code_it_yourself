#include <iostream>
#include <string>
using namespace std;

struct Node
{
  int data;
  struct Node *left, *right;
};

int findAncestor(Node *root, int k, int node, int &res)
{
  if (root == NULL)
    return -1;

  if (node == root->data)
    return 1; // we dont need to match with k here, hence k >= 1

  int leftN = findAncestor(root->left, k, node, res);
  int rightN = findAncestor(root->right, k, node, res);

  if (leftN == -1 && rightN == -1)
    return -1;

  int temp = max(leftN, rightN);

  if (temp == k)
  {
    res = root->data;
    return -1; // if we got the ancestor, there is no need to calculate on other steps
  }
  else
  {
    return temp + 1;
  }
}

int kthAncestor(Node *root, int k, int node)
{
  int res = -1;
  findAncestor(root, k, node, res);

  return res;
}

int main()
{

  return 0;
}

/**
 * @brief
 * https://practice.geeksforgeeks.org/problems/kth-ancestor-in-a-tree/1?utm_source=geeksforgeeks&utm_medium=newui_home&utm_campaign=potd
 *
 * TC: O(N)
 * SC: O(N)
 */