#include <iostream>
#include <string>
#include <vector>
#include <set>
using namespace std;

#define MAX 1000

vector<vector<int>> uniqueRow(int M[MAX][MAX], int row, int col)
{
  set<string> unique;
  vector<vector<int>> res;

  for (int i = 0; i < row; i++)
  {
    string temp = "";
    vector<int> data;

    for (int j = 0; j < col; j++)
    {
      data.push_back(M[i][j]);
      temp += to_string(M[i][j]);
    }

    if (unique.find(temp) != unique.end())
    continue;

    unique.insert(temp);
    res.push_back(data);
  }

  return res;
}

int main()
{

  return 0;
}

/**
 * @brief
 * https://practice.geeksforgeeks.org/problems/unique-rows-in-boolean-matrix/1
 * 
 * TC: O(n * m)
 * SC: O(n * m)
 *
 */