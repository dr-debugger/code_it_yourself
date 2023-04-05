#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;


int countSpecialNumbers(int N, vector<int> arr) {

  if(N == 1)
    return 0;

  sort(arr.begin(), arr.end());

  int divisible_count = 0;

  for (int i = 0; i < arr.size(); i++){
    if(arr[i] == arr[i+1]){
      divisible_count++;
    }else{
      for (int j = 0; j < i; j++){
        if((arr[i] % arr[j]) == 0 ){
          divisible_count++;
          break;
        }
      }
    }
  }

  return divisible_count;
}

int main(){

  vector<int> v{3, 2, 6};

cout <<  countSpecialNumbers(v.size(), v);

  return 0;
}


/**
 * @brief https://practice.geeksforgeeks.org/problems/3d49e4cce2820a813da02d1587c2dd9c542ce769/1
 * 
 */