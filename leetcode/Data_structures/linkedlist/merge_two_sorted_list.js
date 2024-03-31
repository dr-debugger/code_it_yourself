/**
 * @question leetcode 21. Merge Two Sorted Lists
 * @url https://leetcode.com/problems/merge-two-sorted-lists/
 */

function mergeTwoLists(list1, list2) {
  if (list1 === null) return list2;
  if (list2 === null) return list1;
  let newHead = null,
    first = list1,
    sec = list2;
  if (list1.val < list2.val) {
    newHead = list1;
    first = first.next;
  } else {
    newHead = list2;
    sec = sec.next;
  }
  let temp = newHead;
  while (first && sec) {
    if (first.val < sec.val) {
      temp.next = first;
      first = first.next;
    } else {
      temp.next = sec;
      sec = sec.next;
    }
    temp = temp.next;
  }
  if (first) temp.next = first;
  if (sec) temp.next = sec;

  return newHead;
}
