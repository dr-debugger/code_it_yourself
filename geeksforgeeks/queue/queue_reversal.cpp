#include<iostream>
#include<string>
#include<queue>
using namespace std;


void rev(queue<int> &q, queue<int> &res){
  if(q.empty())
    return;

  int top = q.front();
  q.pop();
  rev(q, res);
  res.push(top);
}

queue<int> rev(queue<int> q)
{
  queue<int> res;
  rev(q, res);

  return res;
}


int main(){
  
  return 0;
}

/**
 * @brief
 * https://practice.geeksforgeeks.org/problems/queue-reversal/1?utm_source=geeksforgeeks&utm_medium=newui_home&utm_campaign=potd
 *
 */