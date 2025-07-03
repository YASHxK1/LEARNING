#10.NOT NULL
CREATE TABLE products(
	product_id INT,
    product_name VARCHAR(25) ,
    price DECIMAL(4,2) NOT NULL
);
-- or 
CREATE TABLE products (
	product_id INT,
    product_name VARCHAR(25) ,
    price DECIMAL(4,2)
);
ALTER TABLE products
MODIFY price DECIMAL(4,2) NOT NULL;

INSERT INTO products
VALUES 
(1, 'Laptop', 79.99),
(2, 'Mouse', 19.99),
(3, 'Keyboard', 49.50),
(4, 'Monitor', 15.00),
(5,'COKKIE',null);-- IN THIS PROCE CAN NOT BE NULL
SELECT * FROM products;
drop table products;
