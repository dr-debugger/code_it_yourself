class Solution {
  //Function to return a list of integers denoting spiral traversal of matrix.
  spirallyTraverse(matrix, r, c) {
    let inner = 0,
      outer = 0;

    const visited = [];

    for (let i = 0; i < r; i++) {
      visited.push(Array(c).fill(false));
    }

    let queue = [];
    queue.push(matrix[outer][inner]);
    visited[outer][inner] = true;

    let currPos = "r";

    const res = [];

    while (queue.length) {
      const item = queue.shift();
      res.push(item);

      if (currPos === "r") {
        if (inner + 1 < c && !visited[outer][inner + 1]) {
          inner++;
          queue.push(matrix[outer][inner]);
          visited[outer][inner] = true;
        } else {
          currPos = "d";
          if (outer + 1 < r && !visited[outer + 1][inner]) {
            outer++;
            queue.push(matrix[outer][inner]);
            visited[outer][inner] = true;
          }
        }
      }

      if (currPos === "d") {
        if (outer + 1 < r && !visited[outer + 1][inner]) {
          outer++;
          queue.push(matrix[outer][inner]);
          visited[outer][inner] = true;
        } else {
          currPos = "l";
          if (inner - 1 >= 0 && !visited[outer][inner - 1]) {
            inner--;
            queue.push(matrix[outer][inner]);
            visited[outer][inner] = true;
          }
        }
      }

      if (currPos === "l") {
        if (inner - 1 >= 0 && !visited[outer][inner - 1]) {
          inner--;
          queue.push(matrix[outer][inner]);
          visited[outer][inner] = true;
        } else {
          currPos = "u";
          if (outer - 1 >= 0 && !visited[outer - 1][inner]) {
            outer--;
            queue.push(matrix[outer][inner]);
            visited[outer][inner] = true;
          }
        }
      }

      if (currPos === "u") {
        if (outer - 1 >= 0 && !visited[outer - 1][inner]) {
          outer--;
          queue.push(matrix[outer][inner]);
          visited[outer][inner] = true;
        } else {
          currPos = "r";
          if (inner + 1 < c && !visited[outer][inner + 1]) {
            inner++;
            queue.push(matrix[outer][inner]);
            visited[outer][inner] = true;
          }
        }
      }
    }

    return res;
  }
}

/**
 * @brief
 * https://www.geeksforgeeks.org/problems/spirally-traversing-a-matrix-1587115621/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=bottom_sticky_on_article
 *
 */
