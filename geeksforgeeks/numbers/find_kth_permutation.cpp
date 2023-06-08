#include<iostream>
#include<string>
#include<vector>
using namespace std;

string kthPermutation(int n, int k){
  long long fact = 1;
  vector<int> num;
  num.push_back(1);
  for (int i = 2; i < n; i++)
  {
    fact = fact * i;
    num.push_back(i);
  }
  num.push_back(n);
  k = k - 1;
  string ans = "";
  while (true)
  {
    ans = ans + to_string(num[k / fact]);
    num.erase(num.begin() + k / fact);
    if (num.size() == 0)
      break;
    k = k % fact;
    fact = fact / num.size();
  }
  return ans;
}

    int main()
{

  return 0;
}

/**
 * @brief
 * https://practice.geeksforgeeks.org/problems/find-kth-permutation-0932/1?utm_source=geeksforgeeks&utm_medium=newui_home&utm_campaign=potd
 * 
 * TC: O(n)
 * SC: O(n)
 *
 */