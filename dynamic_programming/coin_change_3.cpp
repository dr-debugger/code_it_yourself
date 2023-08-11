#include <iostream>
#include <string>
#include <vector>
using namespace std;

long long int count(int coins[], int N, int sum)
{
  vector<vector<long long int>> dp(N, vector<long long int>(sum + 1, 0));

  for (int i = 0; i < N; i++)
  {
    dp[i][0] = 1; // if sum = 0 then there is a possible combination
  }

  for (int i = 0; i < N; i++)
  {
    for (int j = 1; j < sum + 1; j++)
    {
      // here "j" denotes the current sum

      long long int take, not_take;
      take = not_take = 0;

      // on taking that coin
      if(j - coins[i] >= 0){ 
        take = dp[i][j - coins[i]]; 
      }

      // on not taking that coin
      if(i > 0){
        not_take = dp[i - 1][j];
      }

      dp[i][j] = take + not_take;
    }
  }

  return dp[N - 1][sum];
}




int main()
{

  return 0;
}

/**
 * @brief
 * https://practice.geeksforgeeks.org/problems/coin-change2448/1?utm_source=geeksforgeeks&utm_medium=newui_home&utm_campaign=potd
 *
 */