#include<iostream>
#include<string>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;

void print(vector<int> arr){
   for (int j = 0; j < arr.size(); j++){
   cout << arr[j] << " ";
  }
}

vector<int> makeBeautiful(vector<int> arr) {
  vector<int> result;

  stack<int> s;

  for (int i = 0; i < arr.size(); i++)
  {
    if(s.empty() || (s.top() >= 0 && arr[i] >= 0) || (s.top() < 0 && arr[i] < 0)){
      s.push(arr[i]);
    }else{
      s.pop();
    }
  }

  while (!s.empty())
  {
    result.push_back(s.top());
    s.pop();
  }

  reverse(result.begin(), result.end());
  return result;
}

int main(){
  vector<int> v = {4, 2, -2, 1};
  makeBeautiful(v);
  return 0;
}

/**
 * @brief https://practice.geeksforgeeks.org/problems/badefd58bace4f2ca25267ccfe0c9dc844415e90/1
 * 
 */