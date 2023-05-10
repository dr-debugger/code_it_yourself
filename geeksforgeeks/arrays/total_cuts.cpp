#include<iostream>
#include<string>
#include<limits.h>
#include<vector>
using namespace std;

int totalCuts(int N, int K, vector<int> &A)
{
  if(N == 1)
    return 0;
  vector<int> temp(N);
  temp[0] = A[0];

  for (int i = 1; i < N; i++)
  {
    temp[i] = max(A[i], temp[i - 1]);
  } // we got the maximum value from left to right for every index

  int count = 0;
  int min_of_right = INT_MAX;
  for (int i = N - 1; i > 0; i--)
  {
    min_of_right = min(min_of_right, A[i]); // this is the minimum value of right suArray;
    // we already stored the maximum value for left subArray

    // now just check the given condition
    if((min_of_right + temp[i-1]) >= K){
      count++;
    }
  }

  return count;
}

int main(){
  
  return 0;
}

/**
 * @brief
 * First create an array of length N, fill with maximum value from left to right;
 * Now for any index, you got the maximum value of the left part(sub array);
 * Create a variable and store the minimum value of the right part on every iteration and compared it with the maximum value of the left part;
 *
 *
 * https://practice.geeksforgeeks.org/problems/cbd515a00f6537180d2e66f1ffe11093a128e560/1?utm_source=geeksforgeeks&utm_medium=newui_home&utm_campaign=potd
 *
 */