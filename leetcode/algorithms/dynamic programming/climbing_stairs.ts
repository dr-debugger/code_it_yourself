/**
 * @question leetcode : Climbing stairs
 * @url https://leetcode.com/problems/climbing-stairs/
 */

function numberofStairs(n: number, obj: Map<number, number>): number {
  if (obj.has(n)) return obj.get(n) || 0;
  if (n === 0) return 1;
  if (n < 0) return 0;
  const withone = numberofStairs(n - 1, obj),
    withtwo = numberofStairs(n - 2, obj);
  obj.set(n, withone + withtwo);
  return obj.get(n)|| 0;
}

function climbStairs(n: number): number {
  const obj = new Map();
  return numberofStairs(n, obj)
}
