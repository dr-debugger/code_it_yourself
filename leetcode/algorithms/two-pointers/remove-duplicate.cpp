#include<iostream>
#include<string>
#include<vector>
using namespace std;

int removeDuplicates(vector<int> &nums)
{
  int size = nums.size();
  int count = 1;
  if(size == 1)
    return count;

  int prevIndex = 0;

  for (int i = 1; i < size; i++)
  {
    if(nums[i] != nums[i-1]){
      count++;
      prevIndex += 1;
      nums[prevIndex] = nums[i];
    }
  }

  return count;
}

int main(){
  
  return 0;
}

/**
 * @brief
 * https://leetcode.com/problems/remove-duplicates-from-sorted-array/
 *
 * Time Complexity O(n);
 * Space Complexity O(1);
 */