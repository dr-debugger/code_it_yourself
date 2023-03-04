#include<iostream>
#include<string>
#include<vector>
#include<cstdlib>
using namespace std;

int sumEveryDiaognal(vector<vector<int>> arr, string str){
  int res = 0;
  
    for (int i = 0; i < arr.size(); i++){
      if(str == "TLtoBR"){
        res += arr[i][i];
      }

      if(str == "BLtoTR"){
        res += arr[i][(arr.size() - 1) - i];
      }
    }
    return res;
};

int diagonalDifference(vector<vector<int>> arr){
    int res_1 = sumEveryDiaognal(arr, "TLtoBR");
    int res_2 = sumEveryDiaognal(arr, "BLtoTR");

    return abs(res_1 - res_2);
}

int main(){
  int result = diagonalDifference({{1,2,3}, {4,5,6}, {9,8,9}});
  cout << result;
  return 0;
}


/**
 * @Ques
 * https://www.hackerrank.com/challenges/three-month-preparation-kit-diagonal-difference/problem?isFullScreen=true&h_l=interview&playlist_slugs%5B%5D=preparation-kits&playlist_slugs%5B%5D=three-month-preparation-kit&playlist_slugs%5B%5D=three-month-week-two
 * 
 * 
 * Time Complexity: O(n*2) => O(n)
 * 
 */