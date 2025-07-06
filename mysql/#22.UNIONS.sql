#22.UNIONS
SELECT firstname, lastname FROM emp
UNION
SELECT first_name, last_name FROM customers;
-- sample input      
INSERT INTO customers
VALUES (6, "Sheldon", "Plankton");
SELECT * FROM customers;
-- prints duplicated too 
SELECT firstname, lastname FROM emp
UNION
SELECT first_name, last_name FROM customers;

