/**
 * @Ques
 * https://www.hackerrank.com/challenges/three-month-preparation-kit-angry-children/problem?isFullScreen=true&h_l=interview&playlist_slugs%5B%5D=preparation-kits&playlist_slugs%5B%5D=three-month-preparation-kit&playlist_slugs%5B%5D=three-month-week-five
 */

function maxMin(k, arr) {
  const dummyArr = [...arr];
  dummyArr.sort((a, b) => a - b);

  // The initial unfairness will be the first portion of the sorted array till k-1
  let min = dummyArr[k - 1] - dummyArr[0];

  // loop through the array from index 1 [we already used first index] to the (length - k);
  for (let i = 1; i < dummyArr.length - k; i++) {
    // calcualte the unfainess of the next portion, and store it insidea temporary variable
    const temp = dummyArr[i + k - 1] - dummyArr[i];

    // compare it with prev minimum value, if its smaller, update the minimum val to "temp"
    if (temp < min) {
      min = temp;
    }
  }

  return min;
}

const arr = [7, 3, 100, 200, 300, 350, 400, 401, 402];
const k = 9;

console.log(maxMin(k, arr));
