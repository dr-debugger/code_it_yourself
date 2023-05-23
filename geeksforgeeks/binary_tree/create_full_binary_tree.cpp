#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

struct Node
{
  int data;
  struct Node *left, *right;
};

Node *newNode(int data)
{
  Node *temp = new Node;
  temp->data = data;
  temp->left = temp->right = nullptr;
  return temp;
}


Node* createTree(int arr[], int &i, int level, int height){
  if(level == height)
    return nullptr;
  Node *temp = newNode(arr[i]);
  i++;

  temp->left = createTree(arr, i, level + 1, height);
  temp->right = createTree(arr, i, level + 1, height);

  return temp;
}

Node *constructBinaryTree(int pre[], int preMirror[], int size)
{
  // first we need find the height of the tree.
  int height = log(size + 1) / log(2);
  int i = 0, level = 0;

  // the 0th index will be the root.
  // after 0th index the first half of the subarray will be left subtree and 2nd half will be right subtree
  // now for the left and right subtree, do the same operation by dividing the respected subArray 
  Node *root = createTree(pre, i, level, height);
  return root;
}

int main()
{
  return 0;
}

/**
 * @brief
 * https://practice.geeksforgeeks.org/problems/93c977e771fc0d82e87ba570702732edb2226ad7/1
 *
 *
 *
 * A full Binary tree is a special type of binary tree in which every parent node/internal node has either two or no children. It is also known as a proper binary tree.
 */