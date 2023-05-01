#include <iostream>
#include <string>
#include <vector>
#include<unordered_map>
using namespace std;

class Node{
public:
  int data;
  std::vector<Node *> children;

  Node(int data)
  {
    this->data = data;
  }
};


string inOrderTraversal(Node *node, unordered_map<string, int> &m){
  if(node == nullptr)
    return "";

  string temp = to_string(node->data);

  for(auto child: node->children){
     temp += "," + inOrderTraversal(child, m);
  }

  m[temp]++;
  return temp;
}

int duplicateSubtreeNaryTree(Node *root)
{

  int ans = 0;
  unordered_map<string, int> m;

  string rootStr = inOrderTraversal(root, m);

  for (auto &val : m)
  {
     if (val.second > 1)
     {
       ans++;
     }
  }

  return ans;
}


int main()
{

  return 0;
}

/**
 * @brief
 * https://practice.geeksforgeeks.org/problems/079dee7e7db7a784ed73f604e3cf1712432edf79/1
 *
 */