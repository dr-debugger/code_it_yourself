#include<iostream>
#include<string>
using namespace std;

int klengthpref(string arr[], int n, int k, string str)
{

  string newStr = str.substr(0, k);

  int count = 0;

  for (int i = 0; i < n; i++)
  {

    if(k > arr[i].length()) continue;

    string dummy = arr[i].substr(0, k);

    if(dummy == newStr)
      count++;
  }

  return count;
}

int main(){
  
  return 0;
}

/**
 * @brief
 * https://practice.geeksforgeeks.org/problems/prefix-match-with-other-strings/1?utm_source=geeksforgeeks&utm_medium=newui_home&utm_campaign=potd
 * 
 * TC: O(n)
 * SC: O(1)
 *
 */