/**
 * @param {Node} root
 * @returns {boolean}
 */

/*
class Node{
    constructor(data){
        this.data = data;
        this.left = null;
        this.right = null;
    }
}
*/

class Solution {
  isHeap(root) {
    if (root === null) return true;
    const queue = [];
    queue.push(root);
    while (queue.length) {
      let prevDoesNotHaveSlotEmpty = true; // while starting on new level, assuming the left most element has both slot filled
      const size = queue.length;
      for (let i = 0; i < size; i++) {
        const curr = queue.shift();

        // tree completeness check
        if (curr?.left === null && curr?.right !== null) return false;
        if (
          (curr?.left !== null || curr?.right !== null) &&
          !prevDoesNotHaveSlotEmpty
        )
          return false; // prev element (from left) has atleast one open slot but still current one has record

        // max-heap check
        if (
          (curr?.left !== null && curr?.data < curr.left.data) ||
          (curr?.right !== null && curr?.data < curr.right.data)
        )
          return false;

        if (curr?.left) queue.push(curr.left);
        if (curr?.right) queue.push(curr.right);

        // tree-completeness maintenance
        if (curr?.left === null || curr?.right === null)
          prevDoesNotHaveSlotEmpty = false; // this is to check if curr [will be previous on next cycle of for loop] has a slot empty.
      }
    }
    return true;
  }
}

/**
 * @brief
 * https://www.geeksforgeeks.org/problems/is-binary-tree-heap/1
 * TC: O(N)
 *
 */
