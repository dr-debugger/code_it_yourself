#include<iostream>
#include<string>
using namespace std;

bool recursiveApproach(string str, int &start, int &end){
  if (end <= 1 || end <= start)
    return true;
  else
  {
    if (str[start] == str[end])
    {
      start += 1;
      end -= 1;
      return recursiveApproach(str, start, end);
    }
    else
    {
      return false;
    }
  }
}

int iterativeApproch(string S){
  int i = 0, j = S.length() - 1;

  while (i <= j)
  {

    if (S[i] != S[j])
      return 0;

    i++, j--;
  }

  return 1;
}

int isPalindrome(string S)
{
  int start = 0;
  int end = S.size() - 1;

  return recursiveApproach(S, start, end);
}

int main(){
  
  return 0;
}

/**
 * @brief
 * https://practice.geeksforgeeks.org/problems/palindrome-string0817/1?utm_source=geeksforgeeks&utm_medium=newui_home&utm_campaign=potd
 *
 */