#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool calculateSum(vector<int> arr, vector<int> &ans, int index, long long sum, int end)
{
  long long temp = sum - arr[index];

  if (temp < 0)
    return false;

  if (temp == 0)
  {
    ans[1] = index + 1;
    return true;
  }

  return calculateSum(arr, ans, index + 1, temp, end);
}

vector<int> subarraySum(vector<int> arr, int n, long long s)
{
  vector<int> ans(2, -1);

  for (int i = 0; i < n; i++)
  {

    bool tempVal = calculateSum(arr, ans, i, s, n);
    if (tempVal)
    {
      ans[0] = i + 1;
      break;
    }
  }

  if (ans[0] != -1 && ans[1] != -1)
    return ans;

  ans.pop_back();
  return ans;
}

/**
 *  *👆 upper declared algorithm will give the right answer but, its not an optimal solution. need to work later to optimize it
 *
 */

int main()
{
  vector<int> i(2, 0);

  cout << i.size() << endl;
  i.pop_back();
  cout << i.size();

  return 0;
}

/**
 * @brief
 * https://practice.geeksforgeeks.org/problems/subarray-with-given-sum-1587115621/1?utm_source=geeksforgeeks&utm_medium=newui_home&utm_campaign=potd
 *
 * 
 */