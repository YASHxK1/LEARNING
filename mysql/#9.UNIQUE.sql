#9.UNIQUE
CREATE TABLE product(
	product_id INT,
    product_name VARCHAR(25) UNIQUE,
    price DECIMAL(4,2)
);
-- or 
CREATE TABLE products (
	product_id INT,
    product_name VARCHAR(25) ,
    price DECIMAL(4,2)
);
ALTER TABLE products
ADD CONSTRAINT UNIQUE (product_name);

INSERT INTO products
VALUES 
(1, 'Laptop', 79.99),
#(1, 'Laptop', 79.99),-- DUPLICATE WONT BE INSERTED 
(2, 'Mouse', 19.99),
(3, 'Keyboard', 49.50),
(4, 'Monitor', 15.00);
SELECT * FROM products;
drop table products;
