#include <iostream>
#include <string>
using namespace std;

int equilibriumPoint(long long a[], int n)
{
  int ans = -1, start = 0, end = n - 1;
 long long int leftSum = 0, rightSum = 0;

  while (start <= end)
  {
    if (start == end)
    {
      leftSum += a[start];
      rightSum += a[start];
      if (leftSum == rightSum)
      {
        ans = start + 1;
      }
      break;
    }

    if (leftSum > rightSum)
    {
      rightSum += a[end];
      end--;
    }
    else
    {
      leftSum += a[start];
      start++;
    }
  }

  return ans;
}

int main()
{

  return 0;
}

/**
 * @brief
 * https://practice.geeksforgeeks.org/problems/equilibrium-point-1587115620/1
 * 
 * TC: O(N)
 * SC: O(1)
 *
 */