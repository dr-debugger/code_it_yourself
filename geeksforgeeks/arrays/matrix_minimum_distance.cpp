#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;

// bfs
void calculateAns(int row, int column, vector<vector<int>> &ans, vector<vector<char>> &c)
{
  queue<pair<int, int>> q;

  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < column; j++)
    {
      char cell = c[i][j];
      if (cell == 'W')
      {
        ans[i][j] = 0; // making every well = 0 , will make the value for 'N' and '.' letter
        q.push({i, j});
      }
    }
  }

  // will start from the destination node, to its left, right, top and bottom element to calculate minimum distance for each node

  while (!q.empty())
  {
    pair<int, int> current = q.front();
    q.pop();

    int i = current.first, j = current.second;

    // check if boundaries mathed
    // check if not visited [if value > -1 then its visited, otherwise not] earlier
    // and will consider only, if the value is either 'H' or '.'

    // top
    if (i - 1 >= 0 && ans[i - 1][j] == -1 && c[i - 1][j] != 'N' && c[i - 1][j] != 'W')
    {
      ans[i - 1][j] = ans[i][j] + 1;
      q.push({i - 1, j});
    }

    // down
    if (i + 1 < row && ans[i + 1][j] == -1 && c[i + 1][j] != 'N' && c[i + 1][j] != 'W')
    {
      ans[i + 1][j] = ans[i][j] + 1;
      q.push({i + 1, j});
    }

    // left
    if (j - 1 >= 0 && ans[i][j - 1] == -1 && c[i][j - 1] != 'N' && c[i][j - 1] != 'W')
    {
      ans[i][j - 1] = ans[i][j] + 1;
      q.push({i, j - 1});
    }

    // right
    if (j + 1 < column && ans[i][j + 1] == -1 && c[i][j + 1] != 'N' && c[i][j + 1] != 'W')
    {
      ans[i][j + 1] = ans[i][j] + 1;
      q.push({i, j + 1});
    }
  }

  // after finishing the while loop, we got minimum distance [one directional, have to make it two way] of every node
  // but in the question it clearly mentioned that for '.' and 'N' , the  value should be 0
  // currently the value for 'N' is -1 and for '.' is the one directional minimum distance to well;

  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < column; j++)
    {
      char cell = c[i][j];
      if (cell == 'N' || cell == '.')
      {
        ans[i][j] = 0;
      }
      if (cell == 'H' && ans[i][j] != -1)
      {
        ans[i][j] = ans[i][j] * 2;
      }
    }
  }
}

vector<vector<int>> chefAndWells(int n, int m, vector<vector<char>> &c)
{
  int row = n, column = m;
  vector<vector<int>> ans(row, vector<int>(column, -1));

  calculateAns(row, column, ans, c);

  return ans;
}

// void traverseVect (vector<vector<long>> v){
//   for (int i = 0; i < v.size(); i++){
//     for (int j = 0; j < v[i].size(); j++){
//       cout << v[i][j] << " ";
//     }
//   }
// delete[] map;
// }

int main()
{

  // vector<vector<long>> *map;
  // map = new vector<vector<long>>(4, vector<long>(5, 0));

  // traverseVect(*map);
  // delete[] map;

  return 0;
}

/**
 * @brief
 * https://practice.geeksforgeeks.org/problems/5a1277ffc1ec1d3a63d1a5d6b3920dd3d1294261/1?utm_source=geeksforgeeks&utm_medium=newui_home&utm_campaign=potd
 *
 */