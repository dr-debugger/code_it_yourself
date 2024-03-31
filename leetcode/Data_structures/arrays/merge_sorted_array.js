/**
 * @question leetcode: Merge Sorted Array
 * @url https://leetcode.com/problems/merge-sorted-array/
 *
 * complexity
 */

function merge(nums1, m, nums2, n) {
  const totalLength = m + n;
  const dummyArr = new Array(totalLength);

  let left = 0,
    right = 0,
    currIndex = 0;

  while (left < m && right < n) {
    if (nums1[left] <= nums2[right]) {
      dummyArr[currIndex] = nums1[left];
      left++;
    } else {
      dummyArr[currIndex] = nums2[right];
      right++;
    }
    currIndex++;
  }

  while (left < m) {
    dummyArr[currIndex] = nums1[left];
    left++;
    currIndex++;
  }
  while (right < n) {
    dummyArr[currIndex] = nums2[right];
    right++;
    currIndex++;
  }

  nums1.length = totalLength;
  for (let i = 0; i < totalLength; i++) {
    nums1[i] = dummyArr[i];
  }
}
