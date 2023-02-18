/**
 * @Ques
 * https://www.hackerrank.com/challenges/three-month-preparation-kit-mini-max-sum/problem?filter=India&filter_on=country&h_l=interview&isFullScreen=true&page=1&playlist_slugs%5B%5D=preparation-kits&playlist_slugs%5B%5D=three-month-preparation-kit&playlist_slugs%5B%5D=three-month-week-one
 */

/**
 * @Author Arijit
 * @param arr = arr[int]
 * @param gap = int gap
 * @return string containing min and max value, separated by space;
 * "0 0" means, entered params are not as expected
 */
const customReduceFunc = (arr, gap) => {
  if (arr.length < 2) return "0 0";
  if (gap >= arr.length) return `0 0`;
  if (arr.length === 2) {
    return `${arr[0]} ${arr[1]}`;
  }

  const minIndex_to = gap - 1, // min-index = 0 to gap;
    maxindex_form = arr.length - gap; // max-Index = (arr.length - gap) to (arr.length - 1)

  // initial value of minMax
  let maxval = arr[maxindex_form],
    minval = arr[0];

  // loop start from "1", cause we already stored index "0" value in the minimum value variable
  for (let i = 1; i < arr.length; i++) {
    if (i <= minIndex_to) {
      // sum of all elemenys from 0 to gap -1
      minval += arr[i];
    }

    if (i > maxindex_form) {
      // sum of all elemnets from (arr.length - gap) to (arr.length - 1)
      maxval += arr[i];
    }
  }

  return `${minval} ${maxval}`;
};

function miniMaxSum(arr) {
  const dummyArr = [...arr];

  dummyArr.sort((a, b) => {
    return a - b;
  });

  const result = customReduceFunc(dummyArr, 4);
  console.log(result);
}

miniMaxSum([1, 3, 5, 7, 9]);
