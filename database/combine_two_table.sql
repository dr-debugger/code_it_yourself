-- https://leetcode.com/problems/combine-two-tables/description/

-- Write your PostgreSQL query statement below
SELECT firstName, lastName, city, state
FROM Person AS P
LEFT JOIN Address AS A ON P.personID = A.personID;