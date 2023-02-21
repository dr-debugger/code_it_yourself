#include<iostream>
#include<string>
using namespace std;

class Node {
  public:
    int value;
    Node *next;

    Node(){
        value = 0;
        next = nullptr;
    }

    Node(int v){
      value = v;
      next = nullptr;
    }
};

bool findCycle(Node *head){
    Node *slowPtr = head;
    Node *fastPtr = head;

    while (slowPtr != nullptr && fastPtr != nullptr && fastPtr->next != nullptr)
    {
      slowPtr = slowPtr->next;
      fastPtr = fastPtr->next->next;

      if(slowPtr == fastPtr){
        return 1;
      }
    }

    return 0;
}


int main(){
  
  return 0;
}

/**
 * @brief
 * We gonna use hare and tortoise algorithm (Floyd's algo) to find loop in a singly linked list
 *
 * Time complexity of the algorithm is O(n);
 *
 *
 * @algo
 * Initialize two pointer that point to the head;
 * Move one pointer twice as faster than other one;
 * If any of these pointer becomes NULL, there is no loop in that linked list, so return fasle;
 * If they match, then loop exist and retun true;
 *
 */