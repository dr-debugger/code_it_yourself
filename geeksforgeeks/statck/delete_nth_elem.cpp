#include<iostream>
#include<string>
#include<stack>
#include<cmath>
using namespace std;


void middle(int i, int mid, stack<int> &s){
  if(i == mid) {
    s.pop();
    return;
  }

  int top = s.top();
  s.pop();
  middle(i + 1, mid, s);
  s.push(top);
}

void deleteMid(stack<int> &s, int sizeOfStack)
{

  int mid = floor(sizeOfStack / 2);
  int i = 0;

  middle(i, mid, s);
}

int main(){
  
  return 0;
}

/**
 * @brief
 * https://practice.geeksforgeeks.org/problems/delete-middle-element-of-a-stack/1?utm_source=geeksforgeeks&utm_medium=newui_home&utm_campaign=potd
 *
 */