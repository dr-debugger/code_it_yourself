#include <iostream>
#include <string>
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

struct node *reverseNodeGroup(struct node *res, int &count, int groupSize, struct node *head)
{

  if (head->next == NULL || count == groupSize)
    return new node(head->data);

  struct node *temp = reverseNodeGroup(res, ++count, groupSize, head->next);
  if (res == NULL)
  {
    res = temp;
  }
  else
  {
    res->next = temp;
  }

  res = res->next;

  return new node(head->data);
}

struct node *reverse(struct node *head, int k)
{
  struct node *res = NULL;
  struct node *temp = res;

  int count = 1, groupSize = k;

  
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