#include <iostream>
#include <string>
#include <vector>
#include <limits.h>
#include <set>
using namespace std;

long long dp(int size, vector<int> &arr, int index, int indication, vector<vector<long long>> &memo)
{
  if (index == size)
    return 0;

  if (memo[index][indication] != INT_MIN)
    return memo[index][indication];

  long long a = INT_MIN, b = INT_MIN;

  if (indication == 1)
  {
    b = dp(size, arr, index + 1, 0, memo);
  }
  a = arr[index] + dp(size, arr, index + 1, 1, memo);

  // we will put the maximum value for any given index in our memoize list
  memo[index][indication] = max(a, b);
  return memo[index][indication];
}

long long findMaxSubsetSum(int N, vector<int> &A)
{

  vector<vector<long long>> memo(N, vector<long long>(2, INT_MIN));

  long long result = dp(N, A, 0, 1, memo);

  return result;
}

int main()
{

  // int a = -1, b = -3;
  // cout << max(a, b);

  vector<int> v = {4, 10, 10};
  cout << findMaxSubsetSum(v.size(), v);

  return 0;
}

/**
 * @brief
 * https://practice.geeksforgeeks.org/problems/e047b92794316450814b29de56cc9c6ec18371b7/1?utm_source=geeksforgeeks&utm_medium=newui_home&utm_campaign=potd
 *
 */