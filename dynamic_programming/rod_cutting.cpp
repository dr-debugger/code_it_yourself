#include <iostream>
#include <string>
#include <vector>
using namespace std;

int maximumProfit(int arr[], int index, int length, vector<int> &memo)
{
  if (index + 1 > length)
    return 0;
  if (memo[length] != -1)
    return memo[length];

  // take the position
  int afterTakingPos = arr[index] + maximumProfit(arr, index, length - (index + 1), memo);
  int afterNotTakingPos = maximumProfit(arr, index + 1, length, memo);

  return memo[length] = max(afterNotTakingPos, afterTakingPos);
}

int cutRod(int price[], int n)
{
  vector<int> memo(n + 1, -1);
  return maximumProfit(price, 0, n, memo);
}

int main()
{

  return 0;
}

/**
 * @brief
 * https://practice.geeksforgeeks.org/problems/rod-cutting0840/1?utm_source=geeksforgeeks&utm_medium=newui_home&utm_campaign=potd
 *
 * TC: O(n^2);
 * TC: O(n);
 */