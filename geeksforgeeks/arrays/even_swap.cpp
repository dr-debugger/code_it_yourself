#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;


vector <int> lexicographicallyLargest(vector <int> &a,int n){
  int prev = 0;
  for(int i=1;i<n;i++){

      if(a[i]%2==a[i-1]%2)
          continue;
      else{
        sort(a.begin() + prev, a.begin() + i, greater<int>{});
        prev = i; 
      }
  }
  sort(a.begin() + prev, a.end(), greater<int>{});
  return a;
}

int main(){
  vector<int> arr{1, 4, 7, 3, 2};
  vector<int> res = lexicographicallyLargest(arr, arr.size());
  return 0;
}


/**
 * @brief https://practice.geeksforgeeks.org/problems/even-swap/1
 * 
 */