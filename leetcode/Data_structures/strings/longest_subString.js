/**
 * @question leetcode 2. Longest Substring Without Repeating Characters
 * @url https://leetcode.com/problems/longest-substring-without-repeating-characters/
 */

const lengthOfLongestSubstring = function (s) {
  let result = 0;
  const stack = new Array();

  const stringArr = s.split("");

  for (let i = 0; i < stringArr.length; i++) {
    const possibleIndex = stack.indexOf(stringArr[i]);
    if (possibleIndex !== -1) {
      stack.splice(0, possibleIndex + 1);
    }

    stack.push(stringArr[i]);
    result = Math.max(stack.length, result);
  }

  return result;
};
/**
 * time complexity = O(n^2)
 */

// 🚩 test
console.log(lengthOfLongestSubstring("abcabcbb"));
