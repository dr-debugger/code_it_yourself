/**
 * @question leetcode 4. Median of Two Sorted Arrays
 * @url https://leetcode.com/problems/median-of-two-sorted-arrays/
 *
 * complexity
 */

/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number}
 */
const findMedianSortedArrays = function (nums1, nums2) {
  let newArr = [...nums1, ...nums2];

  let middle = (newArr.length - 1) / 2;

  if (middle % 1 === 0) return newArr[middle];

  let floor = Math.floor(middle);
  let ceil = Math.ceil(middle);

  let median = (newArr[floor] + newArr[ceil]) / 2;
  return median;
};
