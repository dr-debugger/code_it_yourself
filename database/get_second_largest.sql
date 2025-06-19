-- https://leetcode.com/problems/second-highest-salary/

-- Write your PostgreSQL query statement below
SELECT COALESCE (
    (
      SELECT MAX(salary)
      FROM Employee
      WHERE salary <> (SELECT MAX(salary) FROM Employee)
    ),
    NULL
) AS SecondHighestSalary;


-- More better approch
SELECT COALESCE (
    (
        SELECT DISTINCT(salary)
        FROM Employee
        ORDER BY salary DESC
        LIMIT 1
        OFFSET 1
    ),
    NULL
) AS SecondHighestSalary;