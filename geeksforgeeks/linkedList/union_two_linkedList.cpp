#include<iostream>
#include<set>
#include<string>
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

struct Node *makeUnion(struct Node *head1, struct Node *head2)
{
  Node *ptr1 = head1, *ptr2 = head2;
  set<int> unique;

  while (ptr1 != NULL)
  {
    unique.insert(ptr1->data);
    ptr1 = ptr1->next;
  }

  while (ptr2 != NULL)
  {
    unique.insert(ptr2->data);
    ptr2 = ptr2->next;
  }

  Node *res = NULL;
  Node *tempNode = res;

  for (int val : unique)
  {
    Node *temp = new Node(val);
    if (res == NULL)
    {
      res = temp;
      tempNode = res;
    }
    else
    {
      tempNode->next = temp;
      tempNode = tempNode->next;
    }
  }

  return res;
}

int main(){
  
  return 0;
}

/**
 * @brief
 * https://practice.geeksforgeeks.org/problems/union-of-two-linked-list/1?utm_source=geeksforgeeks&utm_medium=newui_home&utm_campaign=potd
 *
 */