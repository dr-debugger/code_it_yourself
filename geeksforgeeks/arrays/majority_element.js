/**
 * @param {number[]} arr
 * @returns {number}
 */

class Solution {
  majorityElement(arr) {
    const maxApprnce = arr.length / 2;
    const map = new Map();
    let result = -1;

    for (let i = 0; i < arr.length; i++) {
      if (map.has(arr[i])) {
        map.set(arr[i], map.get(arr[i]) + 1);
      } else map.set(arr[i], 1);
    }

    for (const [key, value] of map) {
      if (value > maxApprnce) result = key;
    }

    return result;
  }
}

/**
 * @brief
 * https://www.geeksforgeeks.org/problems/majority-element-1587115620/1
 * TC: O(N)
 *
 */
