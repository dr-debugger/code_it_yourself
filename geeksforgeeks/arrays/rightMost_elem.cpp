#include<iostream>
#include<string>
#include<vector>
#include<limits.h>
#include<algorithm>
using namespace std;

vector<int> leaders(int a[], int n)
{
  int max = INT_MIN;
  vector<int> res;

  for (int i = n - 1; i >= 0; i--)
  {
    if (a[i] >= max)
    {
      max = a[i];
      res.push_back(a[i]);
    }
  }

  reverse(res.begin(), res.end());

  return res;
}

int main(){

  return 0;
}

/**
 * @brief
 * https://practice.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1?page=1&curated[]=1&sortBy=submissions
 *
 * TC: O(n)
 * SC: O(n)
 */