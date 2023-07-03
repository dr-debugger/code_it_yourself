#include <iostream>
#include <string>
using namespace std;

/**
 * @brief
 *
 * @param arr
 * @param n
 * @return int
 *
 * brute Force approach
 * TC: O(n^2)
 * SC: O(1)
 */
int maxIndexDiff(int arr[], int n)
{
  int diff = 0;

  for (int i = 0; i < n - 1; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      int left = arr[i], right = arr[j];
      if (left <= right)
      {
        int tempDiff = j - i;
        diff = max(tempDiff, diff);
      }
    }
  }

  return diff;
}

/**
 * @brief
 *
 * @param arr
 * @param n
 * @return int
 *
 * Using two Pointer approach
 * TC: O(n)
 * SC: O(n)
 *
  1.initialize a variable max with value 0 (This var will store the max difference of j and i)
  2. initialize variable  i=0,and variable j=n-1(that is the last element)
  3. Run a loop till i<j,such that
  4. if arr[i]<=arr[j],then the maximum among the two i.e earlier value of max and (j-i) will be
   assigned to variable max,i will be incremented and j will be reassigned value n-1.
  5. if not then j will be reduced by 1.
  6. return max
 */
int maxIndexDiffOptimal(int arr[], int n)
{
  int i = 0, j = n - 1, diff = 0;

  while (j > i)
  {
    if (arr[i] <= arr[j])
    {
      diff = max(diff, j - i);
      i++;
      j = n - 1;
    }
    else
    {
      j--;
    }
  }

  return diff;
}

int main()
{

  return 0;
}

/**
 * @brief
 * https://practice.geeksforgeeks.org/problems/maximum-index3307/1
 *
 */