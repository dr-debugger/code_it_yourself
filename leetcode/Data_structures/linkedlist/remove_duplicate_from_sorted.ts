/**
 * https://leetcode.com/problems/remove-duplicates-from-sorted-list/
 */

class ListNode {
  val: number;
  next: ListNode | null;
  constructor(val?: number, next?: ListNode | null) {
    this.val = val === undefined ? 0 : val;
    this.next = next === undefined ? null : next;
  }
}

function deleteDuplicates(head: ListNode | null): ListNode | null {
  const temp = head;
  let curr = temp?.next,
    prev = temp;
  
  while (curr) {
    const next = curr?.next;
    if (prev?.val === curr.val) {
      prev.next = next;
      curr = next;
      continue;
    }
    prev = curr;
    curr = curr.next;
  }
  
  return temp;
}
