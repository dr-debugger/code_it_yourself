/**
 * @Ques
 * https://www.hackerrank.com/challenges/three-month-preparation-kit-sock-merchant/problem?isFullScreen=true&h_l=interview&playlist_slugs%5B%5D=preparation-kits&playlist_slugs%5B%5D=three-month-preparation-kit&playlist_slugs%5B%5D=three-month-week-three
 *
 */

function sockMerchant(n, ar) {
  const pairs = new Set();
  let pairCount = 0;

  for (let i = 0; i < n; i++) {
    if (pairs.has(ar[i])) {
      pairCount++;
      pairs.delete(ar[i]);
      continue;
    }

    pairs.add(ar[i]);
  }

  return pairCount;
}

console.log(sockMerchant(7, [1, 2, 1, 2, 1, 3, 2]));
