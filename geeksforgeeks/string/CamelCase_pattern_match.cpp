#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

bool isMatched(string word, string pattern){
  string temp = "";
  for(char c: word){
    if (c >= 65 && c <= 91)
    {
      temp += c;
    }

    if(temp == pattern)
      return true;
  }

  return temp == pattern;
}

vector<string> CamelCase(int N, vector<string> Dictionary, string Pattern)
{
  vector<string> result;

  for (int i = 0; i < N; i++)
  {
   if(isMatched(Dictionary[i], Pattern)){
      result.push_back(Dictionary[i]);
   }
  }

  if(result.size() == 0){
   result.push_back("-1");
  }else{
   sort(result.begin(), result.end());
  }

  return result;
}


int main(){
  string a = "k";
  a += 'b';

  cout << a;
  return 0;
}

/**
 * @brief
 * https://practice.geeksforgeeks.org/problems/camelcase-pattern-matching2259/1?utm_source=geeksforgeeks&utm_medium=newui_home&utm_campaign=potd
 */