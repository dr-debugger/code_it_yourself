function ListNode(val, next) {
  this.val = val === undefined ? 0 : val;
  this.next = next === undefined ? null : next;
}

const addTwoNumbers = function (l1, l2) {
  const l1Reverse = getArray(l1);
  console.log(l1Reverse);
};

const getArray = (list) => {
  if (!list.next) {
    let arr = new Array();
    arr.push(list.val);
    return arr;
  }

  let val = list.val;
  let returArr = getArray(list.next);
  returArr.push(val);
  return returArr;
};

// 🚩 test
const l1 = new ListNode(3, new ListNode(4, new ListNode(5)));
addTwoNumbers(l1);
