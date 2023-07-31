// not yet done
#include<iostream>
#include<string>
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

vector<int> findSpiral(Node *root)
{
  // Your code here
}

int main(){
  
  return 0;
}
/**
 * @brief
 * https://practice.geeksforgeeks.org/problems/level-order-traversal-in-spiral-form/1
 *
 */