/**
 * @question leetcode : Symentric Tree
 * @url https://leetcode.com/problems/symmetric-tree/
 */

function isMirror(left: TreeNode | null, right: TreeNode | null): boolean {
  if (left === null && right === null) return true;
  if (left && right && left.val === right.val)
    return isMirror(left.left, right.right) && isMirror(left.right, right.left);

  return false;
}

function isSymmetric(root: TreeNode | null): boolean {
  return isMirror(root, root);
}
