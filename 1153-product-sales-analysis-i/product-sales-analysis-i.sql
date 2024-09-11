# Write your MySQL query statement below
SELECT product_name,year,price 
FROM Product,Sales
WHERE
Product.Product_id = sales.product_id