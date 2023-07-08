#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void merge(long long arr1[], long long arr2[], int n, int m)
{
  int i = 0;
  int k = n - 1;
  int j = 0;
  while (i <= k and j < m)
  {
    if (arr1[i] >= arr2[j])
    {
      long long prev = arr1[k];
      arr1[k] = arr2[j];
      arr2[j] = prev;
      k--;
      j++;
    }
    else
    {
      i++;
    }
  }
  sort(arr1, arr1 + n);
  sort(arr2, arr2 + m);
}

int main()
{

  return 0;
}

// 1 3 5 7
// 0 2 6 8 9

/**
 * @brief
 * https://practice.geeksforgeeks.org/problems/merge-two-sorted-arrays-1587115620/1?utm_source=geeksforgeeks&utm_medium=newui_home&utm_campaign=potd
 *
 * Both arrays are sorted, so we need to swap previous elem of first arr with the first elem of second arr
 * 
 * TC: O(2 * log(m + n)) // second one is for sorting the two araays
 * SC: O(1)
 */