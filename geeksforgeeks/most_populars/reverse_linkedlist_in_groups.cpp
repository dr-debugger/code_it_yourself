#include <iostream>
#include <string>
#include <stack>
using namespace std;

struct node
{
  int data;
  struct node *next;

  node(int x)
  {
    data = x;
    next = NULL;
  }
};

struct node *reverse(struct node *head, int k)
{
  if (k == 1 || head == NULL)
    return head;

  node *res = new node(0);
  node *dummy = res;
  node *tempHead = head;
  stack<int> s;
  int count = 0;

  while (tempHead != NULL)
  {
    if (count == k)
    {
      while (!s.empty())
      {
        node *tempNode = new node(s.top());
        s.pop();
        res->next = tempNode;
        res = res->next;
      }

      count = 0;
    }

    s.push(tempHead->data);
    tempHead = tempHead->next;
    count++;
  }

  // check if anything left in stack or not, cause "k" sometimes might not be multiplier of N
  while (!s.empty())
  {
    node *tempNode = new node(s.top());
    s.pop();
    res->next = tempNode;
    res = res->next;
  }

  return dummy->next;
}

int main()
{

  struct node *res = new node(5);
  res->next = new node(6);
  // bool b = res == NULL;
  // reverseNodeGroup(res);
  cout
      << res->next->data;
  return 0;
}

/**
 * @brief
 * https://practice.geeksforgeeks.org/problems/reverse-a-linked-list-in-groups-of-given-size/1?utm_source=geeksforgeeks&utm_medium=newui_home&utm_campaign=potd
 *
 * 
 * TC: O(N + K)
 * SC: O(K)
 */