#include <iostream>
#include <string>
#include<set>
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

Node *
removeDuplicates(Node *head){
  set<int> s;

  Node *res = head;
  Node *tempHead = res;
  Node *prev = res;

  while (tempHead != NULL)
  {
    int data = tempHead->data;

    if(s.find(data) != s.end()){
      Node *tempNext = tempHead->next;
      prev->next = tempNext;
      tempHead = tempNext;
    }else{
      s.insert(data);
      prev = tempHead;
      tempHead = tempHead->next;
    }
  }

  return res;
};

int main()
{

  return 0;
}

/**
 * @brief https://practice.geeksforgeeks.org/problems/remove-duplicates-from-an-unsorted-linked-list/1?utm_source=geeksforgeeks&utm_medium=newui_home&utm_campaign=potd
 *
 */