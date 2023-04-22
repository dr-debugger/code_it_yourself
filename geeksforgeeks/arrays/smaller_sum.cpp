#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

vector<long long> smallerSum(int n, vector<int> &arr)
{
  vector<long long> res;

  vector<int> temp = arr;

  sort(temp.begin(), temp.end());

  unordered_map<int, long long> m;
  m[temp[0]] = 0;

  for (int i = 1; i < n; i++)
  {

    if (m.find(temp[i]) != m.end())
      continue;

    long long count = 0;
    for (int j = 0; j < i && temp[j] < temp[i]; j++)
    {
      count += temp[j];
    }
    m[temp[i]] = count;
  }

  for (int i = 0; i < n; i++)
  {
    res.push_back(m[arr[i]]);
  }

  return res;
}

int main()
{

  vector<int> vec{3, 5, 1, 8, 9};

  vector<long long> v = smallerSum(vec.size(), vec);

  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i] << endl;
  }

  return 0;
}

/**
 * @brief
 * https://practice.geeksforgeeks.org/problems/5877fde1c8e1029658845cd4bc94066ac1d4b09b/1
 *
 */