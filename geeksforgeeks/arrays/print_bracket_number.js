class Solution {
  bracketNumbers(str) {
    const result = [],
      bracket_stack = [];
    let count = 0;

    for (let i = 0; i < str.length; i++) {
      if (str[i] === "(") {
        count++;
        bracket_stack.push(count);
        result.push(count);
      }
      if (str[i] === ")" && bracket_stack.length > 0) {
        const currClosing = bracket_stack.pop();
        result.push(currClosing);
      }
    }

    return result;
  }
}

/**
 * @brief
 * https://www.geeksforgeeks.org/problems/print-bracket-number4058/1
 *
 * TC: O(N)
 *
 */
