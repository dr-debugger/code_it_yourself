#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;

vector<vector<int>> threeSum(vector<int> &arr)
{
  sort(arr.begin(), arr.end());

  vector<vector<int>> res;

  set<vector<int>> s;

  for (int i = 0; i < arr.size(); i++)
  {

    int j = i + 1, k = arr.size() -1;

    while (j < k)
    {
      int sum = arr[i] + arr[j] + arr[k];
      
      if(sum == 0)
      {
        s.insert({arr[i], arr[j], arr[k]});
        j++;
        k--;
      }

      if(sum < 0){ // you need to add larger integer
        j++;
      }

      if(sum > 0){ // you need to add smaller integer
        k--;
      }
    }
    
  }

  for(vector<int> val: s){
    res.push_back(val);
  }

  return res;
}

int main(){
  
  return 0;
}

/**
 * @Approach:
 *
 * Approach for this Problem:
1. Sort the input array;
2. Initialize a set to store the unique triplets and an output vector to store the final result
3. Iterate through the array with a variable i, starting from index 0.
4. Initialize two pointers, j and k, with j starting at i+1 and k starting at the end of the array.
4. In the while loop [ from j to k ], check if the sum of nums[i], nums[j], and nums[k] is equal to 0. If it is, insert the triplet into the set and increment j and decrement k to move the pointers.
6. If the sum is less than 0, increment j. If the sum is greater than 0, decrement k.
7. After the while loop, iterate through the set and add each triplet to the output vector.
8. Return the output vector
 *
 */

/**
 * @brief
 * https://leetcode.com/problems/3sum/solutions/3109452/c-easiest-beginner-friendly-sol-set-two-pointer-approach-o-n-2-logn-time-and-o-n-space/
 *
 *
 * TC: O(n^2)
 */
