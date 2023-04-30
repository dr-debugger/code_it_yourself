#include<iostream>
#include<string>
#include<map>
#include<vector>
#include<algorithm>
#include<limits.h>
using namespace std;

int powerfullInteger(int n, vector<vector<int>> &intervals, int k)
{

  int ans = -1;
  map<int, int>m;

  for (int i = 0; i < n; i++){
    int start = intervals[i][0], end = intervals[i][1];

    for (int j = start; j <= end; j++){
      if(m.find(j) != m.end()){
        m[j] = m[j] + 1;
      }else{
        m[j] = 1;
      }

     if(m[j] >= k){
        ans = max(ans, j);
     }
    }
  }

  return ans;
}

int main(){
  
  return 0;
}

/**
 * @brief
 * https://practice.geeksforgeeks.org/problems/d894706c496da5c5a4f45b0360c7f4164c516f83/1
 * 
 * 
 * its a valid ans, but need to optimize it little bit
 */