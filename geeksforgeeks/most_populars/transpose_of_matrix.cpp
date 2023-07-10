#include<iostream>
#include<string>
#include<vector>
using namespace std;

void transpose(vector<vector<int>> &matrix, int n)
{
  for (int i = 0; i < n; i++)
  {
   for (int j = i + 1; j < n; j++)
   {
     swap(matrix[i][j], matrix[j][i]);
   }
  }
}

int main(){

  int a = 10;
  swap(a, a);

  cout << a;

  return 0;
}

/**
 * @brief
 * https://practice.geeksforgeeks.org/problems/transpose-of-matrix-1587115621/1?utm_source=geeksforgeeks&utm_medium=newui_home&utm_campaign=potd
 *
 */