#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int longestSubsequence(int n, int a[])
{
  vector<int> ans;
  ans.push_back(a[0]);
  int len = 1;
  for (int i = 1; i < n; i++)
  {
    if (a[i] > ans.back())
    {
      ans.push_back(a[i]);
      len++;
    }
    else
    {
      int ind = lower_bound(ans.begin(), ans.end(), a[i]) - ans.begin();
      ans[ind] = a[i];
    }
  }
  return len;
}

int main(){
  
  int a[] = {0, 8, 4};
  cout << longestSubsequence(3, a);
  return 0;
}

/**
 * @brief
 * https://practice.geeksforgeeks.org/problems/longest-increasing-subsequence-1587115620/1?utm_source=geeksforgeeks&utm_medium=newui_home&utm_campaign=potd
 *
 */