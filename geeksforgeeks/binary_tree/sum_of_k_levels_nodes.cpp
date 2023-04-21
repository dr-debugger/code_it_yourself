#include <iostream>
#include <string>
#include <unordered_map>
#include <queue>
using namespace std;

class Node
{
public:
  int data;
  Node *left;
  Node *right;
};

int ladoos(Node *root, int home, int k)
{

  int result = 0;
  queue<Node *> q;
  q.push(root);

  Node *home_node;

  unordered_map<Node *, Node *> m;

  unordered_map<Node *, bool> visited;

  while (!q.empty())
  {

    int size = q.size();

    for (int i = 0; i < size; i++)
    {
      Node *temp = q.front();
      q.pop();
      if (temp->data == home)
      {
        home_node = temp;
      }

      if (temp->left)
      {
        q.push(temp->left);
        m[temp->left] = temp; // setting the parent
      }

      if (temp->right)
      {
        q.push(temp->right);
        m[temp->right] = temp;
      }
    }
  }

  //  currently queue is empty;

  q.push(home_node);

  int distance = 0;

  while (!q.empty() && distance <= k)
  {
    int size = q.size();

    for (int i = 0; i < size; i++){
      Node *temp = q.front();
      q.pop();
      visited[temp] = true;

      result += temp->data;

      if(temp->left && !visited[temp->left]){
        q.push(temp->left);
      }

      if(temp->right && !visited[temp->right]){
        q.push(temp->right);
      }

      if(m[temp] && !visited[m[temp]]){
        q.push(m[temp]);
      }

    }
    distance++;
  }

  return result;
}

int main()
{

  return 0;
}

/**
 * @brief https://practice.geeksforgeeks.org/problems/9b61b8efbb030aed799055f776629dbf1287fbae/0
 *
 */