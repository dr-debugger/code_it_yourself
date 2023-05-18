#include <iostream>
#include <string>
#include <vector>
#include <utility>
#include <queue>
using namespace std;

// vector<pair<int, int>> boundary = {pair<int, int>(0, -1), pair<int, int>(0, 1), pair<int, int>(-1, 0), pair<int, int>(1, 0)}; // left, right, up, down

int closedIslands(vector<vector<int>> &matrix, int N, int M)
{
  vector<pair<int, int>> pos;
  vector<vector<bool>> visited(N, vector<bool>(M, false));

  int count = 0;

  for (int i = 1; i < N - 1; i++)
  {
    for (int j = 1; j < M - 1; j++)
    {
      if (matrix[i][j] == 1)
      {
        pair<int, int> p(i, j);
        pos.push_back(p);
      }
    }
  };

  queue<pair<int, int>> q;

  for (int i = 0; i < pos.size(); i++)
  {

    if (visited[pos[i].first][pos[i].second])
      continue;

    q.push(pos[i]);

    bool isNotColided = true;

    while (!q.empty())
    {

      pair<int, int> curr = q.front();
      q.pop();
      int row = curr.first, col = curr.second;

      visited[row][col] = true;
      int left = matrix[row][col - 1],
          right = matrix[row][col + 1],
          up = matrix[row - 1][col],
          down = matrix[row + 1][col];

      if (left == 1 && !visited[row][col - 1])
      {
        visited[row][col - 1] = true;
        if (col - 1 >= 1)
          q.push(pair<int, int>(row, col - 1));
        else
          isNotColided = false;
      }

      if (right == 1 && !visited[row][col + 1])
      {
        visited[row][col + 1] = true;
        if (col + 1 < M - 1)
          q.push(pair<int, int>(row, col + 1));
        else
          isNotColided = false;
      }

      if (up == 1 && !visited[row - 1][col])
      {
        visited[row - 1][col] = true;
        if (row - 1 >= 1)
          q.push(pair<int, int>(row - 1, col));
        else
          isNotColided = false;
      }

      if (down == 1 && !visited[row + 1][col])
      {
        visited[row + 1][col] = true;
        if (row + 1 < N - 1)
          q.push(pair<int, int>(row + 1, col));
        else
          isNotColided = false;
      }
    }

    if (isNotColided)
      count++;
    
  }

  return count;
}

int main()
{

  return 0;
}

/**
 * @brief
 * https://practice.geeksforgeeks.org/problems/find-number-of-closed-islands/1?utm_source=geeksforgeeks&utm_medium=newui_home&utm_campaign=potd
 *
 */