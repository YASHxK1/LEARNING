# 20.ORDER BY
-- assending
select * from emp
order by lastname asc;
-- decending 
select * from emp
order by lastname desc;
--
select * from emp
order by hiredate asc;
-- two catagories
select * from transactions
order by amount asc,customer_id desc;