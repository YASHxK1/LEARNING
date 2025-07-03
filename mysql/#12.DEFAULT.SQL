
#12.DEFAULT
CREATE TABLE products(
	product_id INT,
    product_name VARCHAR(25) ,
    price DECIMAL(4,2) default 0.00
);

INSERT INTO products(product_id,product_name)
VALUES
(104, "straw"),
(105, "napkin"),
(106, "fork" ),
(107, "spoon");
SELECT * FROM products;
-- OR 
INSERT INTO products
VALUES
(110, "straw",5.00),
(111, "napkin",4.00),
(112, "fork",7.00),
(113,"spoon",8.00);

ALTER TABLE  products
ALTER price SET DEFAULT 0;

SELECT * FROM products;
-- OR
CREATE TABLE transactions (
transaction_id INT,
amount DECIMAL(5,2),
transaction_date DATETIME DEFAULT NOW()
);

INSERT INTO transactions(transaction_id,amount)
values(1, 4.99);-- RUN THIS MULTIPLE TIMES TRANSACTIONS DATE WILL BE RECORDER OF THAT TIME
select* FROM transactions;
