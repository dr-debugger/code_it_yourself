#include <iostream>
#include <string>
#include <vector>
#include <limits.h>
using namespace std;

int arrayOperations(int n, vector<int> &arr)
{
  int count = 0;
  int last_0_index = n - 1, zero_count = 0;

  for (int i = 0; i < n; i++)
  {
    if (arr[i] == 0)
    {
      last_0_index = i;
      zero_count++;
      if (i == 0 || arr[i - 1] == 0)
        continue;

      count++;
    }
  }

  if (last_0_index < (n - 1))
    count++;

  if (count == 0 && zero_count != n)
    return -1;

  return count;
}

int main()
{
  vector<int> v(3);
  cout << v[-1];
  return 0;
}

/**
 * @brief
 * https://practice.geeksforgeeks.org/problems/3a93b6a25a7b88e4c80a1fee00898fd8022eb108/1?utm_source=geeksforgeeks&utm_medium=newui_home&utm_campaign=potd
 *
 */