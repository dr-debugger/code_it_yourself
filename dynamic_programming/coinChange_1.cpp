#include <iostream>
#include <string>
#include <map>
#include <limits.h>
#include <vector>
using namespace std;

int countCoin(vector<int> &coins, int target, map<int, int> &m)
{
  if (target == 0)
    return 0;

  int ans = INT_MAX;

  if (m.find(target) != m.end())
  {
    ans = m[target];
  }
  else
  {
    for (int i = 0; i < coins.size(); i++)
    {
      if (target - coins[i] >= 0)
      {
        int subSum = countCoin(coins, target - coins[i], m);

        if (subSum != INT_MAX)
        {
          ans = min(ans, subSum + 1);
        }
      }
    }
  }

  m[target] = ans;
  return ans;
}

int main()
{

  map<int, int> m;
  vector<int> c = {1, 5, 7};

  int a = countCoin(c, 18, m);
  cout << a;

  return 0;
}

/**
 * @Ques
 * Given an integer array of coins[ ] of size N representing different types of currency and an integer sum, The task is to find the number of ways to make sum by using different combinations from coins[]. you can use same coin multiple times;
 *
 *
 */