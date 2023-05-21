#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;

int findMoves(int n, vector<int> chairs, vector<int> passengers)
{
  sort(chairs.begin(), chairs.end());
  sort(passengers.begin(), passengers.end());
  int ans = 0;
  for (int i = 0; i < n; i++)
  {
    ans += abs(chairs[i] - passengers[i]);
  }
  return ans;
}

int main(){
  
  return 0;
}

/**
 * @brief
 * https://practice.geeksforgeeks.org/problems/c6ced401352fd126b89129cd562a9247f057e40e/1
 *
 */