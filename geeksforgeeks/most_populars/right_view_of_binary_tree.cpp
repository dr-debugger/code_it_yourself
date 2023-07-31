// not done yet
#include <iostream>
#include <string>
#include<vector>
using namespace std;

struct Node
{
  int data;
  struct Node *left;
  struct Node *right;

  Node(int x)
  {
    data = x;
    left = right = NULL;
  }
};

vector<int> rightView(Node *root)
{
  // Your Code here
}

int
main()
{

  return 0;
}

/**
 * @brief
https://practice.geeksforgeeks.org/problems/right-view-of-binary-tree/1 *
 */