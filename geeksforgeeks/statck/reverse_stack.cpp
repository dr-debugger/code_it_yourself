#include<iostream>
#include<string>
#include<stack>
#include<queue>
using namespace std;


void getReverseStack(stack<int> &s, queue<int> &q){
  if(s.empty())
    return;

  q.push(s.top());
  s.pop();
  getReverseStack(s, q);
  s.push(q.front());
  q.pop();
}

void Reverse(stack<int> &s)
{
  queue<int> q;
  getReverseStack(s, q);
}

int main(){
  
  return 0;
}

/**
 * @brief
 * https://practice.geeksforgeeks.org/problems/reverse-a-stack/1?utm_source=geeksforgeeks&utm_medium=newui_home&utm_campaign=potd
 *
 */