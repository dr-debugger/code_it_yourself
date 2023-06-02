#include <iostream>
#include <string>
#include <limits.h>
#include <set>
#include <vector>
using namespace std;


bool isPrime(int k){
  if (k <= 1)
    return 0;
  if (k == 2 || k == 3)
    return 1;

  if (k % 2 == 0 || k % 3 == 0)
    return 0;

  for (int i = 5; i * i <= k; i = i + 6)
    if (k % i == 0 || k % (i + 2) == 0)
      return 0;

  return 1;
}

int nThPrime(int k)
{
  int i = 2;

  while (k > 0)
  {
    
    if (isPrime(i))
      k--;

    i++; 
  }
  i -= 1;
  return i;
}

int helpSanta(int n, int m, vector<vector<int>> &g)
{
  vector<set<int>> data;

  int length = INT_MIN;

  for (int i = 0; i < m; i++)
  {
    int f = g[i][0], s = g[i][1];

    if (data.size() == 0)
    {
      set<int> tempSet({f, s});
      data.push_back(tempSet);
      length = 2;
    }
    else
    {
      for (int j = 0; j < data.size(); j++)
      {
        int tempSetSize;
        auto pos1 = data[j].find(f), pos2 = data[j].find(s);
        if (pos1 != data[j].end() || pos2 != data[j].end())
        {
          data[j].insert(f);
          data[j].insert(s);
          tempSetSize = data[j].size();
          length = max(length, tempSetSize);
          break;
        }
        else
        {
          set<int> tempSet({f, s});
          data.push_back(tempSet);
          tempSetSize = 2;
        }
        length = max(length, tempSetSize);
      }
    }
  }

  if (length == INT_MIN)
    return -1;
  return nThPrime(length);
}





int main()
{
  vector<vector<int>> v = {{1, 2},
                           {2, 3},
                           {3, 4},
                           {4, 5},
                           {6, 7},
                           {9, 10}};

  cout << helpSanta(10, 6, v);

  return 0;
}

/**
 * @brief
 * https://practice.geeksforgeeks.org/problems/santa-banta2814/1?utm_source=geeksforgeeks&utm_medium=newui_home&utm_campaign=potd
 *
 *
 *
 * Note: this code will give you exact answer. 
 * But I really dont understand what the hell that "precompute" function does on actual question.
 *
 * In my code:
 * TC: O(M * N * logn);
 * SC: O(M * N);
 */