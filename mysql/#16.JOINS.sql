#16.JOINS

INSERT INTO transactions (amount, customer_id)
VALUES (1.00, NULL);
SELECT * FROM transactions;
-- 
INSERT INTO customers (first_name, last_name)
VALUES ("Poppy", "Puff");
SELECT * FROM customers;

-- inner join 
select transection_id,amount,first_name,last_name
from transactions inner join customers 
on transactions.customer_id= customers.customer_id;

-- left join 
select *
from transactions left join customers 
on transactions.customer_id= customers.customer_id;

-- right join 
select *
from transactions right join customers 
on transactions.customer_id = customers.customer_id;

