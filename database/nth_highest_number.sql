-- https://leetcode.com/problems/nth-highest-salary/description/


CREATE OR REPLACE FUNCTION NthHighestSalary(N INT) RETURNS TABLE (Salary INT) AS $$
DECLARE
    offset_no INT;
BEGIN
-- Removing all negative values
  IF N <= 0 THEN
    SELECT COUNT(EMP.salary) INTO offset_no FROM Employee AS EMP;
  ELSE offset_no := GREATEST(0, N - 1);
  END IF;

  RETURN QUERY (
    -- Write your PostgreSQL query statement below.
     SELECT COALESCE (
      (
        SELECT DISTINCT(E.salary)
        FROM Employee AS E
        ORDER BY E.salary DESC
        LIMIT 1
        OFFSET offset_no
      ),
      NULL
    ) 
  );
END;
$$ LANGUAGE plpgsql;