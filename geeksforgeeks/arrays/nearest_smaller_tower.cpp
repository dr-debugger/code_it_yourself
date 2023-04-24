#include <iostream>
#include <string>
#include <stack>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> nearestSmallerTower(vector<int> arr)
{

  int n = arr.size();

  vector<int> ans(n);

  stack<int> s;

  vector<int> left(n);
  vector<int> right(n);

  // finding left smaller val
  for (int i = 0; i < n; i++)
  {
    while (!s.empty() && arr[s.top()] >= arr[i])
    {
      s.pop();
    }

    if (!s.empty())
    {
      left[i] = s.top();
    }
    else
    {
      left[i] = -1;
    }

    s.push(i);
  }

  while (!s.empty())
    s.pop();

  // finding right smaller val
  for (int i = n - 1; i >= 0; i--)
  {
    while (!s.empty() && arr[s.top()] >= arr[i])
    {
      s.pop();
    }

    if (!s.empty())
    {
      right[i] = s.top();
    }
    else
    {
      right[i] = -1;
    }

    s.push(i);
  }

  for (int i = 0; i < n; i++)
  {
    if (left[i] == right[i])
      ans[i] = -1;
    else if (left[i] == -1)
      ans[i] = right[i];
    else if (right[i] == -1)
      ans[i] = left[i];
    else if (i - left[i] < right[i] - i)
      ans[i] = left[i];
    else if (i - left[i] > right[i] - i)
      ans[i] = right[i];
    else if (arr[right[i]] < arr[left[i]])
      ans[i] = right[i];
    else
      ans[i] = left[i];
  }

  return ans;
}

int main()
{

  return 0;
}

/**
 * @brief
 * https://practice.geeksforgeeks.org/problems/a520c08a8ea9b617be25c38b0fc2fe057e889253/1?utm_source=geeksforgeeks&utm_medium=newui_home&utm_campaign=potd
 *
 */