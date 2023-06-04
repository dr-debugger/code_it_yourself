#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

string reverseEqn(string s)
{
  vector<string> v;

  string str = "";

  for (int i = 0; i < s.length(); i++)
  {
    if(s[i] == '+' || s[i] == '*' || s[i] == '-' || s[i] == '/'){
      v.push_back(str);
      v.push_back(string (1, s[i])); // converting char to string
      str = "";
      continue;
    }

    str += s[i];
  }

  if(str != ""){
    v.push_back(str);
  }

  reverse(v.begin(), v.end());

  string res;
  for (int i = 0; i < v.size(); i++)
  {
    res += v[i];
  }

  return res;
}

int main(){
  string s = "20-3+5*2";

  cout << reverseEqn(s);

  return 0;
}

/**
 * @brief
 * https://practice.geeksforgeeks.org/problems/reversing-the-equation2205/1?utm_source=geeksforgeeks&utm_medium=newui_home&utm_campaign=potd
 *
 */