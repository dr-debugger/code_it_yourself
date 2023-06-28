#include<iostream>
#include<string>
using namespace std;

struct Node
{
  int data;
  Node *left;
  Node *right;
};

int maxDepth(Node *root)
{
  if(root == NULL)
    return 0;

  int leftDepth = maxDepth(root->left);
  int rightDepth = maxDepth(root->right);

  return 1 + max(leftDepth, rightDepth);
}

int main(){
  
  return 0;
}

/**
 * @brief
 * https://practice.geeksforgeeks.org/problems/maximum-depth-of-binary-tree/1?utm_source=geeksforgeeks&utm_medium=newui_home&utm_campaign=potd
 *
 * TC: O(n)
 * SC: O(k)  [ k = height of the tree ]
 */