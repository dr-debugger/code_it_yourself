/**
 * @Ques
 * https://www.hackerrank.com/challenges/three-month-preparation-kit-breaking-best-and-worst-records/problem?isFullScreen=true&h_l=interview&playlist_slugs%5B%5D=preparation-kits&playlist_slugs%5B%5D=three-month-preparation-kit&playlist_slugs%5B%5D=three-month-week-one
 * 
 */

#include<iostream>
#include<string>
#include<vector>
using namespace std;

vector<int> breakingRecords(vector<int> scores) {
  vector<int> result;
  result.assign(2, 0);

  // initilize minimum and maximum value and declare it with arr[0]
  int min, max;
  min = max = scores.at(0);

  for (int i = 1; i < scores.size(); i++)
  {

    // update the most minimum and maximum value according to prticular element

    if(scores.at(i) < min){
      min = scores.at(i);
      result.at(1) = result.at(1) + 1;
      continue;
    }

    if(scores.at(i) > max){
      max = scores.at(i);
      result.at(0) = result.at(0) + 1;
    }
  }
  

  return result;
}

int main(){
  vector<int> s = {12, 24, 10, 24};
  vector<int> r = breakingRecords(s);

  for (int i = 0; i < r.size(); i++){
    cout << r.at(i) << endl;
  }

    return 0;
}

/**
 * Time Complexity : O(n)
 * 
 */

