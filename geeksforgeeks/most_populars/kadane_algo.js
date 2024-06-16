class Solution {
  maxSubarraySum(arr, n) {
    if (arr.length === 1) return arr[0];
    let maxSum = arr[0],
      currSum = 0;

    for (let i = 0; i < n; i++) {
      currSum = Math.max(currSum, 0); //
      currSum += arr[i];
      maxSum = Math.max(currSum, maxSum);
    }

    return maxSum;
  }
}

// **** Brute force approch to solving this. only applicable for positive distinct integers
// *** TC: O(n^2)
function geMaxSubArraySum(arr, n) {
  if (arr.length === 1) return arr[0];
  let maxSum = arr[0];

  for (let i = 0; i < n; i++) {
    let currSum = 0;
    for (let j = i; j < n; j++) {
      currSum += arr[j];
    }
    maxSum = Math.max(maxSum, currSum);
  }
  return maxSum;
}

/**
 * @brief
 * https://www.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1?page=1&sortBy=submissions
 *
 *
 * explanation: https://neetcode.io/courses/advanced-algorithms/0
 */
