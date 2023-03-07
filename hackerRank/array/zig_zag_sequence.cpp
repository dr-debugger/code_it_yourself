#include<iostream>
#include<string>
#include<vector>
using namespace std;


vector<int> findZigZagSequence (vector<int> arr){
  int k = (arr.size() + 1) / 2;

  for (int i = 0; i < k; i++)
  {
    for (int j = i + 1; j < arr.size(); j++)
    {
      if(arr.at(j) < arr.at(i)){
        int temp = arr.at(i);
        arr.at(i) = arr.at(j);
        arr.at(j) = temp;
      }
    }
    
  }

  for (int i = 0; i < arr.size(); i++){
    cout << arr.at(i) << endl;
  }
}


int main(){
  vector<int> arr = {2, 3, 5, 1, 4};
  findZigZagSequence(arr);
  return 0;
}

/**
 * @Ques
 * https://www.hackerrank.com/challenges/three-month-preparation-kit-zig-zag-sequence/problem?isFullScreen=true&h_l=interview&playlist_slugs%5B%5D=preparation-kits&playlist_slugs%5B%5D=three-month-preparation-kit&playlist_slugs%5B%5D=three-month-week-three
 * 
 */