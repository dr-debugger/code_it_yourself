/**
 * @question leetcode : Symentric Tree
 * @url https://leetcode.com/problems/symmetric-tree/
 */

class TreeNode {
  val: number;
  left: TreeNode | null;
  right: TreeNode | null;
  constructor(val?: number, left?: TreeNode | null, right?: TreeNode | null) {
    this.val = val === undefined ? 0 : val;
    this.left = left === undefined ? null : left;
    this.right = right === undefined ? null : right;
  }
}

function isMirror(left: TreeNode | null, right: TreeNode | null): boolean {
  if (left === null && right === null) return true;
  if (left && right && left.val === right.val)
    return isMirror(left.left, right.right) && isMirror(left.right, right.left);

  return false;
}

function isSymmetric(root: TreeNode | null): boolean {
  return isMirror(root, root);
}

export {};

