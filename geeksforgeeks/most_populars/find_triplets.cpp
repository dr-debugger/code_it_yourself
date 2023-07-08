#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool findTriplets(int arr[], int n)
{

  sort(arr, arr + n);

  for (int i = 0; i < n; i++)
  {
    int j = i + 1, k = n - 1;

    while (j < k)
    {
      int sum = arr[i] + arr[j] + arr[k];
      if (sum == 0)
        return 1;

      if (sum < 0)
      {
        // you need to add larger integer
        j++;
      }

      if (sum > 0)
      {
        // you need to add smaller integer
        k--;
      }
    }
  }
  return 0;
}

int main()
{

  return 0;
}

/**
 * @brief
 * https://practice.geeksforgeeks.org/problems/find-triplets-with-zero-sum/1?utm_source=geeksforgeeks&utm_medium=newui_home&utm_campaign=potd
 *
 *
 * its the 3 sum problem, where you need to use two pointers approch
 *
 * TC: O(n^2)
 */