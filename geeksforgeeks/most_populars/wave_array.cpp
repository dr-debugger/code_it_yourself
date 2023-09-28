#include <iostream>
#include <string>
#include <vector>
using namespace std;

void convertToWave(int n, vector<int> &arr)
{
  int index = 0;

  while (index < n - 1)
  {
    if (arr[index] == arr[index + 1])
    {
      index += 2;
      continue;
    }

    int temp = arr[index];
    arr[index] = arr[index + 1];
    arr[index + 1] = temp;

    index += 2;
  }
}

int main()
{

  return 0;
}

/**
 * @brief
 * https://practice.geeksforgeeks.org/problems/wave-array-1587115621/1
 *
 */