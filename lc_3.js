/**
 * @question leetcode 2. Longest Substring Without Repeating Characters
 * @url https://leetcode.com/problems/longest-substring-without-repeating-characters/
 */

const lengthOfLongestSubstring = function (s) {
  let result = 0;
  let max = 0;
  let stack = new Array();

  const stringArr = s.split("");

  for (let i = 0; i < stringArr.length; i++) {
    if (stack.includes(stringArr[i])) {
      max = stack.length;
      result = max > result ? max : result;
      stack.length = 0;
    }
    stack.push(stringArr[i]);
  }

  return result;
};
/**
 * time complexity = 0(n^2)
 */

// 🚩 test
console.log(lengthOfLongestSubstring("abcabcbb"));
