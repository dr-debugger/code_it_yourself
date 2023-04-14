#include<iostream>
#include<string>
#include<vector>
#include<stack>
#include<utility>
using namespace std;


int finLength(int N, vector<int> color, vector<int> radius) {
  stack<pair<int, int>> s;
  s.push({color[0], radius[0]});

  for (int i = 1; i < N; i++){
    if(!s.empty()){
      pair<int, int> p = s.top();

      if(p.first == color[i] && p.second == radius[i]){
        s.pop();
        continue;
      }
    }

    s.push({color[i], radius[i]});
  }

  return s.size();
}

int main(){
  
  return 0;
}

/**
 * @brief https://practice.geeksforgeeks.org/problems/546ea68f97be7283a04ddcc8057e09b46a686471/1?utm_source=geeksforgeeks&utm_medium=newui_home&utm_campaign=potd
 * 
 */