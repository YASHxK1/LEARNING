# 18.AND, OR, NOT
ALTER TABLE emp
ADD COLUMN job VARCHAR(25) AFTER hourlypay;
-- and 
SELECT * FROM emp
where hiredate <"2023-01-5" and job = "cook";
-- or 
SELECT * FROM emp
where job = "cook" or job = "cashier";
-- not
SELECT * FROM emp
where not job = "manager";
-- and not 
SELECT * FROM emp
where not job = "manager" and not job="asst. manager";
-- between 
SELECT * FROM emp
where hiredate between '2023-01-04' and '2023-01-07';
-- in
SELECT * FROM emp
where job IN ("cook", "cashier", "janitor");



