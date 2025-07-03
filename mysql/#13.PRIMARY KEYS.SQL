#13.PRIMARY KEYS
CREATE TABLE transactions(
transection_id INT PRIMARY KEY,
amount DECIMAL(5,2)
);
SELECT *FROM transactions;
-- OR 
ALTER TABLE transactions
ADD CONSTRAINT
PRIMARY KEY(transaction_id);
SELECT * FROM transactions;

INSERT INTO transactions(transection_id,amount)
values(NULL, 2.89);
select* FROM transactions;