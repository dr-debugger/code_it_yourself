/**
 * https://leetcode.com/problems/valid-parentheses/
 */

function isValid(s: string): boolean {
  const stack: string[] = new Array();
  let result = true;
  const matching: Map<string, string> = new Map([
    [")", "("],
    ["}", "{"],
    ["]", "["],
  ]);

  for (let i = 0; i < s.length; i++) {
    const currChar = s.charAt(i);
    if (matching.has(currChar)) {
      const lastParent = stack.pop();
      if (lastParent !== matching.get(currChar)) {
        result = false;
        break;
      }
    } else {
      stack.push(currChar);
    }
  }

  return stack.length > 0 ? false : result;
}
