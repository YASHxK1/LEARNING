# 17.FUNCTIONS
-- count 
select count(amount) 
from transactions;
-- or 
select count(amount) as count
from transactions;
-- or 
select count(amount) as "todays transactions"
from transactions;

select concat(firstname, " ",lastname) as fullname
from emp;
