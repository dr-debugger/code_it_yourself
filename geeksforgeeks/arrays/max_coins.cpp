#include<iostream>
#include<string>
#include<vector>
#include<limits.h>
#include<algorithm>
using namespace std;


class c{
  public:
    int maxCoins(int n, vector<vector<int>> &ranges)
    {
      sort(ranges.begin(), ranges.end());
      vector<int> temp(n);

      temp[n - 1] = ranges[n - 1][2];

      for (int i = n - 2; i >= 0; i--)
      {
        temp[i] = max(temp[i + 1], ranges[i][2]);
      }

      int ans = INT_MIN;

      for (int i = 0; i < n; i++)
      {
        int sum = ranges[i][2];
        int low = i + 1, high = n - 1, mid, t = 0;

        while (low <= high)
        {
          mid = (low + high) / 2;
          if (ranges[mid][0] >= ranges[i][1])
          {
            high = mid - 1;
            t = temp[mid];
          }
          else
          {
            low = mid + 1;
          }
        }

        sum += t;
        ans = max(ans, sum);
      }

      return ans;
    }
};

int main(){
  
  return 0;
}

/**
 * @brief
 * https://practice.geeksforgeeks.org/problems/111fb97b983399c0ee9f34b7bae18ac76bf6f07a/1?utm_source=geeksforgeeks&utm_medium=newui_home&utm_campaign=potd
 *
 * Algo:
 * -> first we have to sort the array.
 * -> then we have to make a temporary storage where we can store the maximum value for all elements to its right
 * -> now loop through the list
 * -> now apply binary search from left of the every index of sorted array and check the given condition
 * -> if condition true, then the maximum value for that index we can get from the temporary storage
 * -> now we have to check if any higher value left on the right side or not.
 * -> if condition doesnt match then we have to traverse to the left side of current index;
 */