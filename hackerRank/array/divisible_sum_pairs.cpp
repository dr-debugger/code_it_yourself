/**
 * @Ques
 * https://www.hackerrank.com/challenges/three-month-preparation-kit-divisible-sum-pairs/problem?isFullScreen=true&h_l=interview&playlist_slugs%5B%5D=preparation-kits&playlist_slugs%5B%5D=three-month-preparation-kit&playlist_slugs%5B%5D=three-month-week-one
 * 
 */

#include<iostream>
#include<string>
#include<vector>
using namespace std;


int divisibleSumPairs(int n, int k, vector<int> arr) {
  int pair_numbers = 0;

  for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j++){
      if(i == j) continue;

      int sum = arr.at(i) + arr.at(j);
      if(i < j && sum % k == 0)
        pair_numbers++;
    }
  }

  return pair_numbers;
}

int main(){
  vector<int> p = {1, 3, 2, 6, 1, 2};
  int res = divisibleSumPairs(p.size(), 3, p);
  cout << res;
  return 0;
}