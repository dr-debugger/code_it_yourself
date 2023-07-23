#include<iostream>
#include<string>
#include<map>
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

Node *segregate(Node *head)
{
  map<int, int> m;

  Node *tempHead = head;
  Node *res = new Node(0);
  Node *tempRes = res;

  while (tempHead != NULL)
  {
    int data = tempHead->data;
    m[data] += 1;
    tempHead = tempHead->next;
  }

  for(auto val: m){
    for (int i = 1; i <= val.second; i++){
      tempRes->next = new Node(val.first);
      tempRes = tempRes->next;
    }
  }

  return res->next;
}

int main(){
  
  return 0;
}

/**
 * @brief
 * https://practice.geeksforgeeks.org/problems/given-a-linked-list-of-0s-1s-and-2s-sort-it/1?utm_source=geeksforgeeks&utm_medium=newui_home&utm_campaign=potd
 *
 */