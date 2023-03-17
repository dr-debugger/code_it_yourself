#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string stringMirror(string str)
{
  string ans;
  ans += str[0];

  for (int i = 1; i < str.length(); i++)
  {
    string temp = string(1, str[i]);

    if (ans.length() == 1 && temp == ans)
      break;

    if(temp <= string(1, ans[i - 1])){
      ans += temp;
      continue;
    }

    break;
  }

  string res = ans;
  reverse(ans.begin(), ans.end());
  res += ans;

  return res;
}

int main()
{

  string str = stringMirror("cba");

  cout << str;
  return 0;
}

/**
 * @brief
 * https://practice.geeksforgeeks.org/problems/d385b9d635b7b10eef6bf365b84922aaeec9eb98/1?utm_source=geeksforgeeks&utm_medium=newui_home&utm_campaign=potd
 *
 */