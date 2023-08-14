#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> singleNumber(vector<int> nums)
{
  vector<int> ans(2, 0);
  sort(nums.begin(), nums.end());
  bool firstOcupied = false;

  for (int i = 0; i < nums.size(); i++)
  {
    if (!firstOcupied)
    {
      ans[0] = nums[i];
      firstOcupied = true;
      continue;
    }

    if (firstOcupied && ans[0] == nums[i])
    {
      ans[0] = 0;
      firstOcupied = false;
      continue;
    }

    if (firstOcupied && ans[0] != nums[i])
    {
      if (ans[1] == 0)
        ans[1] = nums[i];

      else if (ans[1] != 0 && ans[1] == nums[i])
        ans[1] = 0;
      else
        return ans;
    }
  }

  return ans;
}

int main()
{

  return 0;
}

/**
 * @brief
 * https://practice.geeksforgeeks.org/problems/finding-the-numbers0215/1?utm_source=geeksforgeeks&utm_medium=newui_home&utm_campaign=potd
 *
 */