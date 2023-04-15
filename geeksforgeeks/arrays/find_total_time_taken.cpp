#include<iostream>
#include<string>
#include<vector>
#include<set>
using namespace std;

int totalTime(int n, vector<int> &arr, vector<int> &time) {
  set<int> s;

  int totalSec = 0;

  s.insert(arr[0]);

  for (int i = 1; i < n; i++)
  {
    auto pos = s.find(arr[i]);
    if(pos != s.end()){
      int num = arr[i] - 1;
      int val = time[num];
      totalSec += val;
    }else{
      s.insert(arr[i]);
      totalSec++;
    }
  }

  return totalSec;
}

int main(){
  
  return 0;
}

/**
 * @brief https://practice.geeksforgeeks.org/problems/5ae4f296db3e6bb74641c4087d587b6f89d9d135/1?utm_source=geeksforgeeks&utm_medium=newui_home&utm_campaign=potd
 * 
 * Time complexity O(n)
 * Space Complexity O(n) // for the set
 * 
 */