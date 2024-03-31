#include<iostream>
#include<string>
#include<vector>
#include<cmath>
using namespace std;

vector<int> sortedSquares(vector<int> &nums)
{
  int left = 0, right , pointer;
  right = pointer = nums.size() - 1;

  vector<int> result(nums.size());

  while (left <= right)
  {
    int leftSquare = pow(nums[left], 2), rightSquare = pow(nums[right], 2);

    if(leftSquare > rightSquare){
      result[pointer] = leftSquare;
      left++;
    }else{
      result[pointer] = rightSquare;
      right--; 
    }
    pointer--;
  }

  return result;
}

int main(){
  
  return 0;
}

/**
 * @brief
 * https://leetcode.com/problems/squares-of-a-sorted-array/description/
 * 
 * Time complexity O(n),
 * space Complexity O(1) // we are not considering the result cause we are not changing the original array
 */