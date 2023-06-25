#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

string isSubset(int a1[], int a2[], int n, int m)
{

  string flag = "Yes";

  map<int, int> obj;

  for (int i = 0; i < n; i++)
  {
    if (obj.find(a1[i]) != obj.end())
    {
      obj[a1[i]] += 1;
    }
    else
    {
      obj[a1[i]] = 1;
    }
  }

  for (int i = 0; i < m; i++)
  {
    if(obj.find(a2[i]) != obj.end() && obj[a2[i]] > 0){
      obj[a2[i]] -= 1;
    }else{
      flag = "No";
      return flag;
    }
  }

  return flag;
}

int main()
{

  return 0;
}

/**
 * @brief
 * https://practice.geeksforgeeks.org/problems/array-subset-of-another-array2317/1?page=1&curated[]=1&sortBy=submissions
 *
 * TC: O(n + m)
 * SC: O(n)
 */