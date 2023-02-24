/**
 * @Ques
 * https://www.hackerrank.com/challenges/three-month-preparation-kit-lonely-integer/problem?isFullScreen=true&h_l=interview&playlist_slugs%5B%5D=preparation-kits&playlist_slugs%5B%5D=three-month-preparation-kit&playlist_slugs%5B%5D=three-month-week-two
 *
 */

const findUnique = (a) => {
  const mapObj = new Map();

  for (let i = 0; i < a.length; i++) {
    if (mapObj.has(a[i])) {
      mapObj.set(a[i], mapObj.get(a[i]) + 1);
      continue;
    }
    mapObj.set(a[i], 1);
  }
  for (const [key, value] of mapObj) {
    if (value === 1) {
      return key;
    }
  }
};

const unique = findUnique([4, 9, 95, 93, 57, 4, 57, 93, 9]);
