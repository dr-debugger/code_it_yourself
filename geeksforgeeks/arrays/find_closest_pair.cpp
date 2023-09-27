#include<iostream>
#include<vector>
#include<limits.h>
#include<string>
using namespace std;

vector<int> printClosest(int arr[], int brr[], int n, int m, int x)
{
  if (x >= arr[n - 1] + brr[m - 1])
    return {arr[n - 1], brr[m - 1]};
  int i = 0, j = m - 1, dif = INT_MAX;
  vector<int> pr_ans;
  while (j >= 0 && i < n)
  {
    if (abs(x - (arr[i] + brr[j])) < dif)
    {
      dif = abs(x - (arr[i] + brr[j]));
      pr_ans = {arr[i], brr[j]};
    }
    if (arr[i] + brr[j] <= x)
    {
      i++;
    }
    else
    {
      j--;
    }
  }
  return pr_ans;
}

int main(){
  
  return 0;
}

/**
 * @brief
 * https://practice.geeksforgeeks.org/problems/find-the-closest-pair-from-two-arrays4215/1
 *
 */