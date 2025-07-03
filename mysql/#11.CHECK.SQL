11.CHECK
CREATE TABLE employees(
	employee_id INT,
	first_name VARCHAR(50),
	last_name VARCHAR(50),
	hourly_pay DECIMAL(5, 2),
	hire_date DATE
	CONSTRAINT chk_hourly_pay CHECK (hourly_pay >= 10.00)
);
-- OR 
CREATE TABLE employees(
	employee_id INT,
	first_name VARCHAR(50),
	last_name VARCHAR(50),
	hourly_pay DECIMAL(5, 2),
	hire_date DATE
);
ALTER TABLE employees
ADD CONSTRAINT chk_hourly_pay CHECK (hourly_pay >= 10.00);

INSERT INTO employees
VALUES (6,"SHELDON","PLANKTON",10.00,"2023-01-07");

-- how to delet a check 
alter table employees
drop check chk_houtly_pay;
