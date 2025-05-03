class Node {
  constructor(val) {
    this.val = val;
    this.next = null;
  }
}

class Solution {
  // Function to return all prime numbers in the given link list.
  /**
   * @param {Node} head
   * @returns {Node}
   */
  primeList(head) {
    const temp = head;
    let curr = temp;

    while (curr) {
      const currVal = curr.val;
      let hasPrimeOnLeft = false,
        hasPrimeOnRight = false,
        leftCount = 0,
        rightCount = 1;

      let leftNum = currVal,
        rightNum = currVal + 1;

      for (leftNum = currVal; leftNum >= 2; leftNum--) {
        if (this.isPrime(leftNum)) {
          hasPrimeOnLeft = true;
          break;
        }
        leftCount++;
      }

      while (rightCount < leftCount) {
        if (this.isPrime(rightNum)) {
          hasPrimeOnRight = true;
          break;
        }
        rightNum++;
        rightCount++;
      }

      if (hasPrimeOnLeft && leftCount <= rightCount) {
        curr.val = leftNum;
      } else {
        curr.val = rightNum;
      }

      curr = curr.next;
    }

    return temp;
  }

  isPrime(num) {
    if (num <= 1) return false; // 0 and 1 are not prime numbers
    if (num === 2) return true; // 2 is the only even prime number
    if (num % 2 === 0) return false; // Exclude other even numbers

    // Check divisibility up to the square root of num
    for (let i = 3; i <= Math.sqrt(num); i += 2) {
      if (num % i === 0) return false;
    }
    return true;
  }
}

/**
 * @brief
 * https://www.geeksforgeeks.org/problems/prime-list--170646/1
 *
 */
