#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<limits.h>
using namespace std;


int minimumInt(int N, vector<int> &A){

  long long size = A.size();

  long long sum = 0;
  for (int i = 0; i < size; i++)
  {
      sum += A[i];
  }

  long long mini = INT_MAX;
        
  for (int i = 0; i < size; i++)
  {
    long long  currentSum = size * A[i];
    if(sum <= currentSum){
      mini = min(mini,(long long) A[i]);
    }          
  }
        
  return mini;
}


int main(){
  // vector<int> v{9, 8, 2};
  vector<int> v{1,2,3};
  // cout << minimumInt(3, v);
  return 0;
}

/**
 * @brief
 * https://practice.geeksforgeeks.org/problems/1ccf56f107bcb24242469ea45c02f852165a2184/0
 */