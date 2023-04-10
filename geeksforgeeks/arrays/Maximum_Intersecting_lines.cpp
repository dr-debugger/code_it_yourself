#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<numeric>
#include<algorithm>
#include<map>
using namespace std;

int maxIntersections(vector<vector<int>> lines, int N) {

  map<int, int> m;

  int result = 0;

  for (int i = 0; i < lines.size(); i++)
  {
    long long int diff = (abs(lines[i][0] - lines[i][1])) + 1;

    int *arr = new int[diff];

    iota(arr, arr + diff, lines[i][0]);

    for (int j = 0; j < diff; j++){
      if(m.find(arr[j]) != m.end()){
        m[arr[j]] = m[arr[j]] + 1;
      }else{
        m[arr[j]] = 1;
      }
    }

    delete[] arr;
  }

  map<int, int>::iterator itr = m.begin();

  while (itr != m.end())
  {
    result = max(result, itr->second);
    ++itr;
  }

  return result;
}

int main(){
  
  return 0;
}

/**
 * @brief https://practice.geeksforgeeks.org/problems/63c232252d445a377e01cd91adfd7d1060580038/1
 *
 * range => map length => minVal(lines[0]) to maxVal(lines[0];
 * Time Complexity: O(N * diff * log(range));
 * Space Complexity: O(range); // not considering the dynamic array
 *
 */