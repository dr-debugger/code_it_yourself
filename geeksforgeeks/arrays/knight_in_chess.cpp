#include<iostream>
#include<string>
#include<queue>
#include<utility>
#include<vector>
#include<limits.h>
using namespace std;


int knightInGeekland(int start_x,int start_y,vector<vector<int>> &arr){

  int row = arr.size(),
      column = arr[0].size();

  queue<pair<int, int>> q;
  q.push({start_x, start_y}); // adding intial position

  vector<int> knight_x_moves = {-2, -2, -1, 1, -1, 1, 2, 2};
  vector<int> knight_y_moves = {1, -1, 2, 2, -2, -2, -1, 1};

  vector<int> coinsVal;

  vector<vector<bool>> visited(row, vector<bool>(column, false));

  visited[start_x][start_y] = true;

  while (!q.empty())
  {
    int size = q.size(); // size of previous queue
    int stepResult = 0;
    while (size--) // looping through the previous queue elements
    {
      auto current = q.front();
      q.pop();
      int x = current.first, y = current.second;
      stepResult += arr[x][y];

      for (int i = 0; i < knight_x_moves.size(); i++){
        int new_x = x + knight_x_moves[i], new_y = y + knight_y_moves[i];

        if(new_x >= 0 && new_y >= 0 && new_x < row && new_y < column && !visited[new_x][new_y]){
          q.push({new_x, new_y});
          visited[new_x][new_y] = true;
        }
      }
    }
    coinsVal.push_back(stepResult); // also consider that one step completed
  }

  int minStep = -1, maxVal = INT_MIN;

  for (int i = coinsVal.size() - 1; i >= 0; i--)
  {
    if((i + coinsVal[i]) < coinsVal.size()){
      int index = coinsVal[i] + i;
      coinsVal[i] = coinsVal[i] + coinsVal[index];
    }

    if(coinsVal[i] >= maxVal){
      maxVal = max(maxVal, coinsVal[i]);
      minStep = i;
    }

  }

  return minStep;
}

int main(){

  return 0;
}

/**
 * @brief https://practice.geeksforgeeks.org/problems/7e5ec07f9d865297cff9a91522c2ce805433b420/1?utm_source=geeksforgeeks&utm_medium=newui_home&utm_campaign=potd
 *
 *
 * Time complexity O(m*n)
 * Space complexity O(m*n) // for visited nodes +  queues;
 */