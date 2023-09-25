#include <iostream>
#include <string>
#include <queue>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> maxCombinations(int N, int K, vector<int> &A, vector<int> &B)
{
  vector<int> ans(K);
  priority_queue<int, vector<int>, greater<int>> p; // this will store value in min-heap [non-decresing order]

  sort(A.begin(), A.end());
  sort(B.begin(), B.end());

  // if there is N elements in both arrays, the possible number of output sums would be n^2;
  // we need find first K largest elemnt among those sums.

  for (int i = N - 1; i > N - K - 1; i--)
  {
    for (int j = N - 1; j > N - K - 1; j--)
    {
      int sum = A[i] + B[j];
      if (p.size() < K)
      {
        p.push(sum);
      }
      else
      {
        if (p.top() < sum)
        {
          p.pop();
          p.push(sum);
        }
        else
          break; // as the array is sorted, other elements in the left will always smaller
      }
    }
  }

  int index = K - 1;
  while (!p.empty())
  {
    ans[index] = p.top();
    p.pop();
    index--;
  }

  return ans;
}

int main()
{

  return 0;
}

/**
 * @brief
 * https://practice.geeksforgeeks.org/problems/maximum-sum-combination/1
 *
 */