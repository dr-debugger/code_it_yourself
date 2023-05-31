// not completed yet

#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool isWordExist(vector<vector<char>> &board, string word)
{
  int row = board.size(), column = board[0].size();
  vector<vector<bool>> isVistied(row, vector<bool>(column, false));

  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < column; j++)
    {
      pair<int, int> down(i + 1, j);
      pair<int, int> right(i, j + 1);

      if (down.first < row)
      {
      }

      // isVistied[i][j] =
      //     isVistied[down.first][down.second] = isVistied[right.first]
      //                                                   [right.second] = true;
    }
  }
}

int main()
{

  return 0;
}

/**
 * @brief
 *
 *
 */