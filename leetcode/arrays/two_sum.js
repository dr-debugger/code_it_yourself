// leetcode 1. Two Sum
/**
 * @question leetcode 1. Two Sum
 * @url https://leetcode.com/problems/two-sum/
 */

/**
 *
 * @param {*} nums Array
 * @param {*} target Number
 * @returns
 */
const twoSum = function (nums, target) {
  for (let i = 0; i < nums.length; i++) {
    let possVal = target - nums[i];

    for (let j = 0; j < nums.length; j++) {
      if (j !== i && nums[j] === possVal) {
        if (i < j) {
          return [i, j];
        } else {
          return [j, i];
        }
      }
    }
  }
};

// 🚩 test
const indexs = twoSum([3, 10, 10, 6, 5], 20);
console.log(indexs);
