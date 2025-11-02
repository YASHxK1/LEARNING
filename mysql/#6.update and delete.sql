#6.update and delete 
update emp 
set hourlypay =10.50 ,
	hiredate="2023-01-07"
where empid=6;

delete from emp where empid=6;
select * from emp;