#14.AUTO_INCREMENT
CREATE TABLE transactions(
transection_id INT primary KEY auto_increment,
amount DECIMAL(5,2)
);
SELECT * FROM transactions;

INSERT INTO transactions(amount)
VALUES (4.99);
SELECT * FROM transactions;   

-- OR
ALTER TABLE transactions
auto_increment =1000; -- STRATING FROM 1000 AND  INCREMENT BY 1 
SELECT * FROM transactions;
