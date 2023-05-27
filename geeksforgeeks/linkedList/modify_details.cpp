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

bool isEven(int num)
{
  return num % 2 == 0;
}

struct Node *modifyTheList(struct Node *head)
{
  vector<int> value;

  Node *temp = head;

  while (temp != NULL)
  {
    value.push_back(temp->data);
    temp = temp->next;
  }

  int middle = value.size() / 2;
  int j = value.size() - 1;

  for (int i = 0; i < middle; i++)
  {
    int tempVal = value[i];

    value[i] = value[j] - tempVal;
    value[j] = tempVal;

    j--;
  }

  Node *res = head;

  for (int i = 0; i < value.size(); i++){
    res->data = value[i];
    res = res->next;
  }

  return head;
}

int main()
{

  return 0;
}

/**
 * @brief
 * https://practice.geeksforgeeks.org/problems/modify-linked-list-1-0546/1?utm_source=geeksforgeeks&utm_medium=newui_home&utm_campaign=potd
 *
 */