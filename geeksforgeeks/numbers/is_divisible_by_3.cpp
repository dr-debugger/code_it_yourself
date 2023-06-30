#include<iostream>
#include<string>
using namespace std;

int isDivisible(string s)
{
  int evenSum = 0;
  int oddSum = 0;

  for (int i = s.length() - 1; i >= 0; i--)
  {
    if (s[i] == '1')
    {
      if (i % 2 == 0)
      {
        evenSum += 1;
      }
      else
      {
        oddSum += 1;
      }
    }
  }

  return abs(evenSum - oddSum) % 3 == 0;
}

int main(){
  cout << isDivisible("100");
  return 0;
}

/**
 * @brief
 * https://practice.geeksforgeeks.org/problems/is-binary-number-multiple-of-30654/1?utm_source=geeksforgeeks&utm_medium=newui_home&utm_campaign=potd
 *
 */