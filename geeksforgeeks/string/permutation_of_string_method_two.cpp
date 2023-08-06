#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

void solve(vector<string> &vs, string s, string S, int freq[])
{

  if (s.size() == S.size())
  {
    vs.push_back(s);
    return;
  }

  for (int i = 0; i < S.size(); i++)
  {
    if (!freq[i])
    {
      s += S[i];
      freq[i] = 1;
      solve(vs, s, S, freq);
      freq[i] = 0;
      s.pop_back();
    }
  }
}

vector<string> permutation(string S)
{
  vector<string> vs;
  string s = "";
  int freq[S.size()];
  for (int i = 0; i < S.size(); i++)
  {
    freq[i] = 0;
  }
  solve(vs, s, S, freq);
  sort(vs.begin(), vs.end());
  return vs;
}

int main(){
  
  return 0;
}

/**
 * @brief
 * https://practice.geeksforgeeks.org/problems/permutations-of-a-given-string-1587115620/1
 *
 */