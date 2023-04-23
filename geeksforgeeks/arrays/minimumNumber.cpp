#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;


int GCD(int a, int b){
  if( a == 0) {
    return b;
  }
  return GCD(b % a, a);
}

int minimumNumber(int n, vector<int> &arr)
{
  sort(arr.begin(), arr.end());

  int result = arr[0];

  for (int i = 1; i < n; i++){
    result = GCD(arr[i], result);
  }

  return result;
}

int main(){
  vector<int> v = {3, 2, 4};
  minimumNumber(v.size(), v);
  return 0;
}

/**
 * @brief https://practice.geeksforgeeks.org/problems/7d62c8606123a199720c9b6885249dc9ac651bb7/1
 *
 * 
 * For this question we need to find GCD [Greatest Common Factor] of all numbers {array elements}
 */