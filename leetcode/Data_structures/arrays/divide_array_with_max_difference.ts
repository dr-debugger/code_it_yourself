/**
 * @question 2966. Divide Array Into Arrays With Max Difference
 * @url https://leetcode.com/problems/divide-array-into-arrays-with-max-difference/description/?envType=daily-question&envId=2025-06-18
 */


function divideArray(nums: number[], k: number): number[][] {
  const newArr = [...nums];
  let result: number[][] = [];

  newArr.sort((a,b) => a - b);

  for(let i = 0; i < newArr.length; i += 3){
      const firstElem = newArr[i], 
      secondElem = newArr[i+1], 
      thirdElem = newArr[i+2];

      if((thirdElem - firstElem) > k){
          result = [];
          break
      }

      result.push([firstElem, secondElem, thirdElem]);

  }

  return result;

};