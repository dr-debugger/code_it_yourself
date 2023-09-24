#include<iostream>
#include<string>
#include<vector>
using namespace std;

vector<int> duplicates(int arr[], int n)
{
  vector<int> ans;
  for (int i = 0; i < n; i++)
  {
    arr[arr[i] % n] += n;
  }
  for (int i = 0; i < n; i++)
  {
    arr[i] /= n;
    if (arr[i] > 1)
      ans.push_back(i);
  }
  if (ans.size() == 0)
    return {-1};
  return ans;
}

int main(){
  
  return 0;
}

/**
 * @brief
 * https://practice.geeksforgeeks.org/problems/find-duplicates-in-an-array/1
 *
 */