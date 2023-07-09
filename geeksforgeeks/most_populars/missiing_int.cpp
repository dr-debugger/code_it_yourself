#include<iostream>
#include<string>
#include<limits.h>
#include<algorithm>
using namespace std;

int missingNumber(int arr[], int n)
{
  sort(arr, arr + n);
  int res = 1;

  for (int i = 0; i < n; i++)
  {
   if(arr[i] == res){
     res += 1;
   } 
  }

  return res;
}

int main(){
  int arr[] = {0, -10, 1, 3, -20};
  cout << missingNumber(arr, 5);
  return 0;
}

/**
 * @brief
 * https://practice.geeksforgeeks.org/problems/smallest-positive-missing-number-1587115621/1?utm_source=geeksforgeeks&utm_medium=newui_home&utm_campaign=potd
 *
 * TC: O(n + nlog(n)) => O(n)
 * SC: O(1)
 */