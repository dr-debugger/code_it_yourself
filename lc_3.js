/**
 * @question leetcode 2. Longest Substring Without Repeating Characters
 * @url https://leetcode.com/problems/longest-substring-without-repeating-characters/
 */

const lengthOfLongestSubstring = function (s) {
  let result = 0;
  let max = 0;
  let stack = [];

  const stringArr = s.split("");

  for (let i = 0; i < stringArr.length; i++) {}

  return result > max ? result : max;
};

// 🚩 test
console.log(lengthOfLongestSubstring("pwwkew"));
