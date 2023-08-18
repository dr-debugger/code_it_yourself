#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

vector<int> leaders(int a[], int n)
{
  vector<int> ans;

  int currLeader = 0;

  for (int i = n-1; i >= 0; i--)
  {
    if(a[i] >= currLeader){
      ans.push_back(a[i]);
      currLeader = a[i];
    }
  }
  reverse(ans.begin(), ans.end());

  return ans;
}

int main(){
  
  return 0;
}

/**
 * @brief
 * https://practice.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1?utm_source=geeksforgeeks&utm_medium=newui_home&utm_campaign=potd
 *
 */