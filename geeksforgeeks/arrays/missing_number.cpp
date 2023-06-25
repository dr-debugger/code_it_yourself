#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int missingNumber(vector<int> &array, int n)
{
  sort(array.begin(), array.end());

  int res = 0;

  for (int i = 0; i < n; i++)
  {
    if((i + 1) != array[i]){
      cout << i + 1 << " " << array[i] << endl;
      res = i + 1;
      break;
    }
  }

if(res == 0)
    return n;

  return res;
}

int main(){

  vector<int> a = {1, 3, 4, 2};

  cout << missingNumber(a, a.size() + 1);


  return 0;
}
/**
 * @brief
 * https://practice.geeksforgeeks.org/problems/missing-number-in-array1416/1?page=1&curated[]=1&sortBy=submissions
 * 
 * TC: O(n)
 * SC: O(1)
 */