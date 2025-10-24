-- Create the customers table (primary key table)
CREATE TABLE customers (
    customer_id INT PRIMARY KEY,
    first_name VARCHAR(50),
    last_name VARCHAR(50)
);

-- Insert data into customers table
INSERT INTO customers (customer_id, first_name, last_name)
VALUES
(1, 'Fred', 'Fish'),
(2, 'Larry', 'Lobster'),
(3, 'Bubble', 'Bass'),
(4, 'Poppy', 'Puff');

-- Create the transactions table (foreign key references customers)
CREATE TABLE transactions (
    transaction_id INT PRIMARY KEY,
    amount DECIMAL(5,2),
    customer_id INT,
    FOREIGN KEY (customer_id) REFERENCES customers(customer_id)
);

-- Insert data into transactions table
INSERT INTO transactions (transaction_id, amount, customer_id)
VALUES
(1000, 4.99, 3),
(1001, 2.89, 2),
(1002, 3.38, 3),
(1003, 4.99, 1),
(1004, 1.00, NULL);