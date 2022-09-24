function ListNode(val, next) {
  this.val = val === undefined ? 0 : val;
  this.next = next === undefined ? null : next;
}

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

// 🚩 test
const l1 = new ListNode(3, new ListNode(4, new ListNode(5)));
const l2 = new ListNode(3, new ListNode(4));
console.log(addTwoNumbers(l1, l2));
//685
