#include<iostream>
#include<string>
#include <queue>
using namespace std;

long long maxDiamonds(int A[], int N, int K)
{
  priority_queue<int> maxheap;
  for (int i = 0; i < N; i++)
  {
    maxheap.push(A[i]);
  }
  long long sum = 0;
  while (K--)
  {
    int top = maxheap.top();
    sum += top;
    maxheap.pop();
    maxheap.push(top / 2);
  }
  return sum;
}

int main(){
  
  return 0;
}

/**
 * @brief
 * https://practice.geeksforgeeks.org/problems/chinky-and-diamonds3340/1?utm_source=geeksforgeeks&utm_medium=newui_home&utm_campaign=potd
 */