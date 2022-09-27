/**
 * @question leetcode 2. Add two numbers
 * @url https://leetcode.com/problems/add-two-numbers/
 */

function ListNode(val, next) {
  this.val = val === undefined ? 0 : val;
  this.next = next === undefined ? null : next;
}

/**
 *
 * @param {*} l1
 * @param {*} l2
 * @description this approach might work but it will failed with big integers
 * and it also takes 0(n^2) time complexity
 * @returns the sum of two linked list
 */
const addTwoNumbers = function (l1, l2) {
  const l1Reverse = getReverseString(l1);
  const l2Reverse = getReverseString(l2);

  let total = +l1Reverse + +l2Reverse;
  const result = String(total).split("").reverse();

  const finalList = makeFinalList(result);
  return finalList;
};
const makeFinalList = (arr) => {
  if (arr.length === 0) return new ListNode();
  const head = new ListNode(Number(arr[0]));
  let curr = head;
  for (let i = 1; i < arr.length; i++) {
    let node = new ListNode(Number(arr[i]));
    curr.next = node;
    curr = curr.next;
  }
  return head;
};
const getReverseString = (list) => {
  if (!list.next) {
    let str = String(`${list.val}`);
    return str;
  }

  let val = list.val;
  let returnedStr = getReverseString(list.next);
  return `${returnedStr}${val}`;
};

/**
 * @second approch
 * @description this is the accepted ans
 */
const addLinkedList = (l1, l2) => {
  let carry = 0;
  let tempHead = new ListNode();
  let curr = tempHead;

  let firstList = l1,
    secondList = l2;

  while (firstList || secondList) {
    let sum = 0;

    if (firstList && secondList) {
      sum += firstList.val + secondList.val + carry;
    }
    if (firstList && !secondList) {
      sum += firstList.val + carry;
    }
    if (!firstList && secondList) {
      sum += secondList.val + carry;
    }

    carry = Math.floor(sum / 10);

    curr.next = new ListNode(sum % 10);
    curr = curr.next;
    firstList = firstList ? firstList.next : null;
    secondList = secondList ? secondList.next : null;
  }

  if (carry) {
    curr.next = new ListNode(carry);
  }

  return tempHead.next;
};

// 🚩 test
const l1 = new ListNode(3, new ListNode(4, new ListNode(5)));
const l2 = new ListNode(3, new ListNode(4));
console.log(addLinkedList(l1, l2));
//685
