#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> find(int arr[], int n, int x)
{
  vector<int> ans(2, -1);

  int start = 0, end = n - 1;

  while (start <= end)
  {
    int middle = (start + end) / 2;
    if (arr[middle] == x)
    {
      // check left
      for (int i = middle; i >= 0; i--)
      {

        if (arr[i] == x && i == 0)
        {
          ans[0] = i;
          break;
        }

        if (arr[i] != x)
        {
          ans[0] = i + 1;
          break;
        }
      }

      // check right
      for (int i = middle; i < n; i++)
      {
        if (arr[i] == x && i == n - 1)
        {
          ans[1] = i;
          break;
        }
        if (arr[i] != x)
        {
          ans[1] = i - 1;
          break;
        }
      }

      break;
    }

    if (arr[middle] < x)
      start = middle + 1;

    if (arr[middle] > x)
      end = middle - 1;
  }

  return ans;
}

int main()
{

  return 0;
}

/**
 * @brief
 * https://practice.geeksforgeeks.org/problems/first-and-last-occurrences-of-x3116/1
 * 
 * TC: O(logN)
 * SC: O(1)
 *
 */