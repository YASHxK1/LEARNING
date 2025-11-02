#15.FOREIGN KEYS
CREATE TABLE customers (
customer_id INT PRIMARY KEY AUTO_INCREMENT,
first_name VARCHAR(50),
last_name VARCHAR(50)
);
INSERT INTO customers (first_name, last_name)
VALUES
("Fred", "Fish"),
("Larry", "Lobster"),
("Bubble", "Bass");
SELECT * FROM customers;

CREATE TABLE transactions(
transection_id INT primary KEY auto_increment,
amount DECIMAL(5,2),
customer_id INT,
foreign key(customer_id) references customers (customer_id)
);
SELECT * FROM transactions;
-- OR 
ALTER TABLE transactions
ADD constraint fk_customer_id -- SPECIFY foreign key NAME  
FOREIGN KEY (customer_id) references customers (CUSTOMER_ID);

INSERT INTO transactions (amount, customer_id)
VALUES
(4.99, 3),
(2.89, 2),
(3.38, 3),
(4.99, 1);
SELECT * FROM transactions;