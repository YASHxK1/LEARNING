#21.LIMIT
-- limited rows are displayed 
select * from customers
limit 2;
-- limit by specefic 
select * from customers
order by last_name desc limit 2;
-- this displayes the limited rows after certin rows 
-- ex- limit 2,1; is 1 row is printed skiping first 2 rows 
select*from customers
limit 2,1;