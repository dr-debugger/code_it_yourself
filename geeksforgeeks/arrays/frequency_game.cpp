#include<iostream>
#include<string>
#include<map>
#include<limits.h>
using namespace std;

int LargButMinFreq(int arr[], int n)
{
  map<int, int> m;
 
  for (int i = 0; i < n; i++)
  {
    if(m.find(arr[i]) != m.end()){
      m[arr[i]] = m[arr[i]] + 1;
    }else{
      m[arr[i]] = 1;
    }
  }

  int res = INT_MIN, freq = INT_MAX;

  map<int, int>::iterator itr = m.begin();
  while (itr != m.end())
  {
    
    if(itr->second <= freq && itr-> first >= res){
      freq = itr->second;
      res = itr->first;
      cout << itr->first << " " << itr->second << endl;

    }
      ++itr;
  }
  

  // for(auto x: m){
  //   if(x->second < freq){
  //     res = x.first;
  //   }
  // }

  return res;
}

int main(){
  int arr[] = {3 ,3, 9, 7, 1, 9};
  cout << LargButMinFreq(arr, 6);
  return 0;
}

/**
 * @brief
 * https://practice.geeksforgeeks.org/problems/frequency-game/1?utm_source=geeksforgeeks&utm_medium=newui_home&utm_campaign=potd
 *
 */