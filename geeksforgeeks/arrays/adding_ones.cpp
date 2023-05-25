#include <iostream>
#include <string>
using namespace std;

void update(int a[], int n, int updates[], int k)
{
  for (int i = 0; i < k; i++)
  {
    int j = updates[i] - 1;
    a[j]++;
  }
  for (int i = 0; i < n; i++)
  {
    if (i > 0)
      a[i] += a[i - 1];
  }
}

int main()
{

  return 0;
}

/**
 * @brief
 * https://practice.geeksforgeeks.org/problems/adding-ones3628/1?utm_source=geeksforgeeks&utm_medium=newui_home&utm_campaign=potd
 * 
 * TC: O(n)
 * SC: O(1)
 *
 */