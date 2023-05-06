#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <limits.h>
using namespace std;

bool makeChanges(int N, int K, int target, vector<int> &coins)
{
  vector<vector<bool>> matrix(K + 1, vector<bool>(target + 1, false));

  matrix[0][0] = true;

  for (int i = 0; i < N; i++){
    for (int j = 1; j <= K; j++){
      for (int l = 1; l <= target; l++){
        if(coins[i] <= l && matrix[j][l] == false){
          matrix[j][l] = matrix[j - 1][l - coins[i]];
        }
      }
    }
  }

  return matrix[K][target];
}


int main()
{

  // vector<int> c = {1, 5, 7};

  // int a = countCoin(c, 18);
  // cout << a;
  return 0;
}

/**
 * @brief
 * https://practice.geeksforgeeks.org/problems/09b910559335521654aa2909f86f893447d8f5ba/1?utm_source=geeksforgeeks&utm_medium=newui_home&utm_campaign=potd
 *
 */