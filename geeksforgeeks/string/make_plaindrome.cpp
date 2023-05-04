#include <iostream>
#include <string>
#include <vector>
#include <set>
using namespace std;

int isPlaindromeStrPresent(string &str, vector<string> &arr, int currIndex, set<int> &s)
{

  bool found = false;

  for (int i = 0; i < arr.size(); i++)
  {

    for(auto x: s){
      cout << x << " ";
    }
    cout << " " <<endl;

    if (i == currIndex || (s.find(i) != s.end()))
      continue;

    found = true;

    int size = str.length() - 1;
    string curr = arr[i];
    for (int j = size; j >= 0; j--)
    {
      if (str[j] != curr[size - j])
      {
        found = false;
        break;
      }
    }

    if (found)
      return i;

  }

  return -1;
}

bool makePalindrome(int n, vector<string> &arr)
{

  set<int> s;
  for (int i = 0; i < n; i++)
  {
    
    if(s.find(i) != s.end()){
      continue;
    }else{
      s.insert(i);
      int index = isPlaindromeStrPresent(arr[i], arr, i, s);
      s.insert(index);
      if (index == -1)
        return false;
    }

    return true;
  }
}

int main()
{
  vector<string> arr = {"qjhpzpnsyp", "pysnpzphjq", "yrkkpohvaw", "wavhopkkry", "qgaeqzqwji", "ijwqzqeagq", "korsdogmqv", "vqmgodsrok","pysnpzphjq"};

  cout << makePalindrome(arr.size(), arr);
  return 0;
}

/**
 * @brief
 * https://practice.geeksforgeeks.org/problems/8d0e8785cef59cf4903b926ceb7100bcd16a9835/1
 *
 */