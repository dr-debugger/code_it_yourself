#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Node
{
  int data;
  struct Node *next;
  Node(int x)
  {
    data = x;
    next = NULL;
  }
};

int getNthFromLast(Node *head, int n)
{
  vector<int> m;

  Node *temp = head;
  while (temp != NULL)
  {
    m.push_back(temp->data);
    temp = temp->next;
  }

  if (n <= m.size())
  {
    int pos = m.size() - n;
    return m[pos];
  }
  return -1;
}

int main()
{

  return 0;
}

/**
 * @brief
 * https://practice.geeksforgeeks.org/problems/nth-node-from-end-of-linked-list/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
 *
 */