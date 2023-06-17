#include<iostream>
#include<string>
using namespace std;

string longestPalin(string S)
{
  int size = S.size(), end = 0, start = 0, length = 0;

  for (int i = 0; i < size; i++)
  {

    int currLength = 1;

    // check for odd
    int l = i - 1, r = i + 1;
    while (l >= 0 && r < size && S[l] == S[r])
    {
      currLength += 2;
      l--;
      r++;
    }

    if (currLength > length)
    {
      length = currLength;
      start = l + 1;
      end = r;
    }

    // check for even
    l = i - 1, r = i, currLength = 0;
    while (l >= 0 && r < size && S[l] == S[r])
    {
      currLength += 2;
      l--;
      r++;
    }

    if (currLength > length)
    {
      length = currLength;
      start = l + 1;
      end = r;
    }
  }

  // you got the maximum substring, and also got the start and end index of the substring

  return S.substr(start, length);
}

int main(){
  
  return 0;
}

/**
 * @brief
 * https://practice.geeksforgeeks.org/problems/longest-palindrome-in-a-string3411/1?utm_source=geeksforgeeks&utm_medium=newui_home&utm_campaign=potd
 *
 */