#include <iostream>
#include <string>
using namespace std;

struct Node
{
  int key;
  struct Node *left;
  struct Node *right;

  Node(int x)
  {
    key = x;
    left = NULL;
    right = NULL;
  }
};

// inorder traversal
void optimizeDFS(Node *root, Node *&pre, Node *&suc, int key)
{
  if (root == NULL)
    return;

  int temp = root->key;

  optimizeDFS(root->left, pre, suc, key);

  if (temp < key && (pre == NULL || pre->key < temp))
  {
    pre = root;
  }

  // will take the first large element as successor, cause we are on the left side of the BST
  if (suc == NULL && temp > key) 
  {
    suc = root;
    return;
  }

  optimizeDFS(root->right, pre, suc, key);
}

void findPreSuc(Node *root, Node *&pre, Node *&suc, int key)
{
  pre = NULL, suc = NULL;

  optimizeDFS(root, pre, suc, key);
}

int main()
{

  return 0;
}

/**
 * @brief
 * https://practice.geeksforgeeks.org/problems/predecessor-and-successor/1
 *
 */