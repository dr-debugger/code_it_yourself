#include<iostream>
#include<string>
#include<queue>
using namespace std;

void insert(queue<int> &q, int k)
{
  q.push(k);
}

int findFrequency(queue<int> &q, int k)
{
  int freq = 0;
  queue<int> temp = q;
  while (!temp.empty())
  {
    int item = temp.front();
    temp.pop();
    if(item == k)
      freq++;
  }

  
  if(freq == 0)
    return -1;

  return freq;
}

int main(){
  
  return 0;
}

/**
 * @brief
 * https://practice.geeksforgeeks.org/problems/queue-operations/1?utm_source=geeksforgeeks&utm_medium=newui_home&utm_campaign=potd
 *
 */