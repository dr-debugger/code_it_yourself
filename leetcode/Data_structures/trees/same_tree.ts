/**
 * @question leetcode : Same tree
 * @url https://leetcode.com/problems/same-tree/
 */

function isSameTree(p: TreeNode | null, q: TreeNode | null): boolean {
  if (p === null && q === null) return true;
  if (p?.val !== q?.val) return false;

  const left = isSameTree(p?.left || null, q?.left || null),
    right = isSameTree(p?.right || null, q?.right || null);

  return left && right;
}
