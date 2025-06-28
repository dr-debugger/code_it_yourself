-- https://leetcode.com/problems/employees-earning-more-than-their-managers/
SELECT E.name AS Employee
FROM Employee AS E
WHERE E.salary > (
  SELECT TEMP.salary
  FROM Employee AS TEMP
  WHERE  TEMP.id = E.managerId 
)