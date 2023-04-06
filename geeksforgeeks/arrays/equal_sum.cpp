#include<iostream>
#include<string>
#include<vector>
using namespace std;


int equalSum(int N, vector<int> &A) {
  long long total = 0;
  long long start_to_i = 0;

  for (int i = 0; i < N; i++)
    total += A[i];

  for (int i = 0; i < N; i++){
    long long tempTotal = total - A[i];
    if(tempTotal == 2*start_to_i)
      return i + 1;

    start_to_i += A[i];
  }

  return -1;
}

int main(){
  
  return 0;
}

/**
 * @brief https://practice.geeksforgeeks.org/problems/78a6854c8a2915e05f236aa407dfaa1bbc8ae7d3/1
 *
 *
 */