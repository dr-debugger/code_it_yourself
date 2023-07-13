#include<iostream>
#include<vector>
#include<string>

using namespace std;
#define MAX 1000

int findK(int a[MAX][MAX], int n, int m, int k)
{
  int startRow = 0, endRow = n - 1, startCol = 0, endCol = m - 1, i;

  while (startRow <= endRow && startCol <= endCol)
  {

    // print the first row of remaining rows
    for (i = startCol; i <= endCol; ++i){
      
    }
  }
}

int main(){
  
  return 0;
}

/**
 * @brief
 * https://practice.geeksforgeeks.org/problems/find-nth-element-of-spiral-matrix/1?utm_source=geeksforgeeks&utm_medium=newui_home&utm_campaign=potd
 *
 */