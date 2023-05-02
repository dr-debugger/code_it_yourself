#include <iostream>
#include <string>
#include <vector>
#include <limits.h>
#include <numeric>
using namespace std;

bool isDivisible(int mid, vector<int> &arr, int k)
{
  int currPerson = 0, sum = 0;
  for (int i = 0; i < arr.size(); i++)
  {
    sum += arr[i];

    if (sum >= mid)
    {
      currPerson++;
      sum = 0;
    }
  }

  return currPerson >= k;
}

int maxSweetness(vector<int> &sweetness, int N, int K)
{
  int lowSweet = INT_MAX, highSweet = 0;

  for (int i = 0; i < N; i++)
  {
    lowSweet = min(lowSweet, sweetness[i]);
    highSweet += sweetness[i];
  }

  int ans = 0;

  while (lowSweet <= highSweet)
  {
    int middle = (lowSweet + highSweet) / 2;

    if (isDivisible(middle, sweetness, K + 1))
    {
      ans = middle;
      lowSweet = middle + 1;
      continue;
    }

    highSweet = middle - 1;
  };

  return ans;
}

int main()
{
  int i = 17 / 2;
  cout << i << endl;
  return 0;
}

/**
 * @brief
 * https://practice.geeksforgeeks.org/problems/0a7c7f1089932257071f9fa076f25d353f91e0fd/1
 *
 */