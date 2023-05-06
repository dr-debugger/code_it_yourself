#include<iostream>
#include<string>
#include<limits.h>
#include<vector>
using namespace std;

int countCoin(vector<int> &coins, int target)
{
  if (target == 0)
    return 0;

  int ans = INT_MAX;

  for (int i = 0; i < coins.size(); i++)
  {
    if (target - coins[i] >= 0)
    {
      int subSum = countCoin(coins, target - coins[i]);

      if (subSum != INT_MAX)
      {
        ans = min(ans, subSum + 1);
      }
    }
  }

  return ans;
}

int main(){
  
  return 0;
}