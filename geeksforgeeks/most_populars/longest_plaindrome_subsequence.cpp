// not done yet
#include <iostream>
#include <string>
using namespace std;

bool isStrPlaindrome(string str, int &start, int &end)
{
  if (end <= 1)
    return true;
  else
  {
    if (str[start] == str[end])
    {
      start += 1;
      end -= 1;
      return isStrPlaindrome(str, start, end);
    }
    else
    {
      return false;
    }
  }
}

int longestPalinSubseq(string A)
{
  
}

int main()
{
  string str = "abc";
  int start = 0, end = str.length() - 1;
  // cout << isStrPlaindrome(str, start, end);

  string s = "";
  cout << s.length();
  return 0;
}

/**
 * @brief
 * https://practice.geeksforgeeks.org/problems/longest-palindromic-subsequence-1612327878/1
 *
 */