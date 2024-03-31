#include<iostream>
#include<string>
#include<map>
#include<vector>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
  map<int, int> m;

  vector<int> result;

  for (int i = 0; i < nums.size(); i++)
  {
    int temp = target - nums[i];

    if(m.find(temp) != m.end()){
      result.push_back(m[temp]);
      result.push_back(i);
      break;
    }

    m[nums[i]] = i;
  }

  return result;
}

int main(){
  
  return 0;
}

/**
 * @brief
 * https://leetcode.com/problems/two-sum/
 *
 *
 * Time Complexity O(n);
 * Space Complexity O(n);
 * 
 * Run time : 14 -15 ms
 */
