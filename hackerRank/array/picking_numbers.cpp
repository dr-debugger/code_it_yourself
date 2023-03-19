/**
 * @file picking_numbers.cpp
 * @brief https://www.hackerrank.com/challenges/three-month-preparation-kit-picking-numbers/problem?isFullScreen=true&h_l=interview&playlist_slugs%5B%5D=preparation-kits&playlist_slugs%5B%5D=three-month-preparation-kit&playlist_slugs%5B%5D=three-month-week-four
 * @date 2023-03-19
 * 
 */
#include<iostream>
#include<string>
#include<vector>
#include <cmath>
#include <algorithm>
using namespace std;


int pickingNumbers(vector<int> a) {
  int result = 0;
  int temp_res = 1;

  // sort(a.begin(), a.end());

  // for (int i = 0; i < a.size(); i++)
  // {
  //   cout << a.at(i)<< endl;
  // }
  

  for (int i = 1; i < a.size(); i++)
  {
    if(abs(a.at(i) - a.at(i-1)) <= 1){
      temp_res++;
    }else{
      temp_res = 1;
    }
    if(result < temp_res){
      result = temp_res;
    }
  }

  return result;
}

int main(){
  vector<int> a = {4 ,6 ,5 ,3, 3 ,1};
  cout << pickingNumbers(a);
  return 0;
}