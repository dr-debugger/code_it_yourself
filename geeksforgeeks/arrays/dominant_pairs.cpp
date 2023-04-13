#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int dominantPairs(int n, vector<int> &arr){
  int mid = n / 2;
  sort(arr.begin(), arr.begin() + mid, greater<int>());
  sort(arr.begin() + mid, arr.end());

  int count = 0;

  for (int i = 0; i < mid; i++){
    for (int j = mid; j < n; j++){
      if(arr[i] >= 5*arr[j]){
        count++;
        continue;
      }
      break;
    }
  };

  return count;
}

int main(){
  vector<int> v = {10,8,2,1,1,2};
 int c = dominantPairs(v.size(), v);
 cout << c;
 return 0;
}

/**
 * @brief https://practice.geeksforgeeks.org/problems/2a1c11024ceae36363fc405e07f2fa3e2f896ef0/1
 * 
 */