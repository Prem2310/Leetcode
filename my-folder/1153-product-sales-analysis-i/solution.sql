# Write your MySQL query statement below
SELECT product_name,year,price 
FROM Sales AS s
JOIN Product AS p
On s.product_id = p.product_id

-- SELECT p.product_name, s.year,s.price
-- FROM Sales AS s
-- LEFT JOIN Product AS p
-- ON s.product_id=p.product_id;
