#include <iostream>
#include <string>
#include<cmath>
using namespace std;

int isPossible(int n, int m, string s)
{

  int right = 1, left = 1, up = 1, down = 1, col = 1, row = 1;

  for (int i = 0; i < s.length(); i++)
  {
    if (s[i] == 'L')
      col--;
    if (s[i] == 'R')
      col++;
    if (s[i] == 'D')
      row++;
    if (s[i] == 'U')
      row--;

    left = min(col, left);
    right = max(col, right);
    up = min(row, up);
    down = max(row, down);
  }

  col = abs(right - left) + 1;
  row = abs(down - up) + 1;

  if(col <= m && row <= n){
    return 1;
  }

  return 0;
}

int main()
{

  return 0;
}

/**
 * @brief
 * https://practice.geeksforgeeks.org/problems/trace-path3840/1?utm_source=geeksforgeeks&utm_medium=newui_home&utm_campaign=potd
 *
 */