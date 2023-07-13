#include <iostream>
#include <string>
#include <map>
#include<set>
using namespace std;

bool isFrequencyUnique(int n, int arr[])
{
  map<int, int> m;

  for (int i = 0; i < n; i++)
  {
    m[arr[i]] += 1;
  }

  set<int> s;

  for(auto x: m){
    if(s.find(x.second) != s.end()){
      return false;
    }else{
      s.insert(x.second);
    }
  }

  return true;
}

int main()
{
  int arr[] = {2,
               2,
               5,
               10,
               1,
               2,
               10,
               5,
               10,
               2};

  isFrequencyUnique(10, arr);

  return 0;
}

/**
 * @brief
 * https://practice.geeksforgeeks.org/problems/unique-frequencies-of-not/1?utm_source=geeksforgeeks&utm_medium=newui_home&utm_campaign=potd
 *
 */