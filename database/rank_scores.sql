-- https://leetcode.com/problems/rank-scores/description/?envType=problem-list-v2&envId=database

SELECT score, DENSE_RANK() OVER (ORDER BY score DESC) AS "rank"
FROM Scores;

-- info: http://geeksforgeeks.org/sql-server/rank-and-dense-rank-in-sql-server/