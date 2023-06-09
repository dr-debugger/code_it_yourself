#include<iostream>
#include<set>
#include<string>
#include<vector>
using namespace std;

void permute(string &s, int l, int r, set<string> &unique)
{
  if(l == r){
    unique.insert(s);
    return;
  }

  for (int i = l; i < r; i++)
  {
    swap(s[l], s[i]);
    permute(s, l + 1, r, unique);
    swap(s[l], s[i]);
  }
}

vector<string> find_permutation(string S)
{
  set<string> unique;
  vector<string> res;

  permute(S, 0, S.size(), unique);

  for(string x: unique){
    res.push_back(x);
  }

  return res;
}

int main(){
  
  return 0;
}

/**
 * @brief
 * https://practice.geeksforgeeks.org/problems/permutations-of-a-given-string2041/1?utm_source=geeksforgeeks&utm_medium=newui_home&utm_campaign=potd
 *
 *
 * TC: O(n! + n!) // looping through n! values of the set
 * SC: O(n!) // sets are unique
 * 
 * Its a very popular question of backtracking;
 */