#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> fourSum(vector<int> &arr, int k)
{
  vector<vector<int>> result;
  int n = arr.size();

  // Step 1: Sort the array.
  sort(arr.begin(), arr.end());

  // Step 2: For the first and second fixed elements:
  for (int i = 0; i < n - 3; i++)
  {
    // Avoid duplicate quadruples
    if (i > 0 && arr[i] == arr[i - 1])
      continue;

    for (int j = i + 1; j < n - 2; j++)
    {
      // Avoid duplicate quadruples
      if (j > i + 1 && arr[j] == arr[j - 1])
        continue;

      int left = j + 1;
      int right = n - 1;

      while (left < right)
      {
        int sum = arr[i] + arr[j] + arr[left] + arr[right];
        if (sum == k)
        {
          result.push_back({arr[i], arr[j], arr[left], arr[right]});
          // Move the left pointer and avoid duplicates
          left++;
          while (left < right && arr[left] == arr[left - 1])
            left++;
          // Move the right pointer and avoid duplicates
          right--;
          while (left < right && arr[right] == arr[right + 1])
            right--;
        }
        else if (sum < k)
        {
          left++;
        }
        else
        {
          right--;
        }
      }
    }
  }

  return result;
}

int main(){
  
  return 0;
}

/**
 * @brief
 * https://practice.geeksforgeeks.org/problems/find-all-four-sum-numbers1732/1
 *
 */